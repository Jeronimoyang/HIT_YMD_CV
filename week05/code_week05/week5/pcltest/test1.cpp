#include "pcltest.h"

int main(int argc, char** argv) {
    pcl::PointCloud<pcl::PointXYZ>::Ptr cloud(
        new pcl::PointCloud<pcl::PointXYZ>);

    // 打开点云文件
    if (pcl::io::loadPCDFile<pcl::PointXYZ>("../cylinder.pcd", *cloud) == -1) {
        PCL_ERROR("Couldn't read file cylinder.pcd \n");
        return (-1);
    }
    // 默认就是而二进制块读取转换为模块化的PointCLoud格式里pcl::PointXYZ作为点类型
    // 然后打印出来
    std::cout << "Loaded " << cloud->width * cloud->height
              << " data points from cylinder.pcd with the following fields: "
              << std::endl;
    for (size_t i = 0; i < cloud->points.size(); ++i)
        std::cout << "    " << cloud->points[i].x << " " << cloud->points[i].y
                  << " " << cloud->points[i].z << std::endl;

    // 直通滤波
    pcl::PointCloud<pcl::PointXYZ>::Ptr cloud_filtered(
        new pcl::PointCloud<pcl::PointXYZ>);
    pcl::PassThrough<pcl::PointXYZ> pass;
    pass.setInputCloud(cloud);
    pass.setFilterFieldName("z");  // 将Z轴不在（0，1.5）范围内的点过滤掉
    pass.setFilterLimits(0, 1.5);
    pass.filter(*cloud_filtered);  // 剩余的点储存在cloud_filtered中后续使用

    // 体素滤波
    /*pcl::PointCloud<pcl::PointXYZ>::Ptr cloud_filtered(
        new pcl::PointCloud<pcl::PointXYZ>);
    pcl::VoxelGrid<pcl::PointXYZ> sor;  // 创建体素滤波对象
    sor.setInputCloud(cloud);           // 输入点云指针
    sor.setLeafSize(0.01f, 0.01f, 0.01f);  // 设置体素体积为1立方厘米的立方体
    sor.filter(*cloud_filtered);  // 结果
    pcl::visualization::CloudViewer viewer1("sor");
    viewer1.showCloud(cloud_filtered);
    while (!viewer1.wasStopped()) {
    }*/

    // 统计滤波
    /*pcl::PointCloud<pcl::PointXYZ>::Ptr filtered_cloud(
        new pcl::PointCloud<pcl::PointXYZ>);
    pcl::StatisticalOutlierRemoval<pcl::PointXYZ> sor;  // 创建统计滤波对象
    sor.setInputCloud(cloud);                           // 输入
    sor.setMeanK(50);                                   // k个邻近点
    sor.setStddevMulThresh(1.0);  // 标准差倍数，判断是否为离群点的阈值
    sor.filter(*filtered_cloud);  // 结果
    pcl::visualization::CloudViewer viewer1("sor");
    viewer1.showCloud(filtered_cloud);
    while (!viewer1.wasStopped()) {
    }*/

    // 法线
    pcl::PointCloud<pcl::Normal>::Ptr cloud_normals(
        new pcl::PointCloud<pcl::Normal>);
    pcl::search::KdTree<pcl::PointXYZ>::Ptr tree(
        new pcl::search::KdTree<pcl::PointXYZ>);
    pcl::NormalEstimation<pcl::PointXYZ, pcl::Normal> normal_est;
    normal_est.setSearchMethod(tree);
    normal_est.setInputCloud(cloud_filtered);
    normal_est.setKSearch(50);
    normal_est.compute(*cloud_normals);
    // 创建分割对象
    pcl::SACSegmentationFromNormals<pcl::PointXYZ, pcl::Normal> seg;
    pcl::ModelCoefficients::Ptr coefficients_plane(new pcl::ModelCoefficients),
        coefficients_cylinder(new pcl::ModelCoefficients);
    pcl::PointIndices::Ptr inliers_plane(new pcl::PointIndices),
        inliers_cylinder(new pcl::PointIndices);
    // 分割，提取平面
    seg.setOptimizeCoefficients(true);
    seg.setModelType(pcl::SACMODEL_NORMAL_PLANE);
    seg.setNormalDistanceWeight(0.1);
    seg.setMethodType(pcl::SAC_RANSAC);
    seg.setMaxIterations(100);
    seg.setDistanceThreshold(0.03);
    seg.setInputCloud(cloud_filtered);
    seg.setInputNormals(cloud_normals);
    seg.segment(*inliers_plane,
                *coefficients_plane);  // 获取平面模型系数和平面上的点

    // 提取平面
    pcl::ExtractIndices<pcl::PointXYZ> extract;
    extract.setInputCloud(cloud_filtered);
    extract.setIndices(inliers_plane);
    extract.setNegative(false);
    pcl::PointCloud<pcl::PointXYZ>::Ptr cloud_plane(
        new pcl::PointCloud<pcl::PointXYZ>());
    extract.filter(*cloud_plane);

    // 提取圆柱

    pcl::ExtractIndices<pcl::Normal> extract_normals;
    pcl::PointCloud<pcl::PointXYZ>::Ptr cloud_filtered2(
        new pcl::PointCloud<pcl::PointXYZ>);
    pcl::PointCloud<pcl::Normal>::Ptr normals2(
        new pcl::PointCloud<pcl::Normal>);
    // 获取平面以外的点和点的法线
    extract.setNegative(true);
    extract.filter(*cloud_filtered2);
    extract_normals.setNegative(true);
    extract_normals.setInputCloud(cloud_normals);
    extract_normals.setIndices(inliers_plane);
    extract_normals.filter(*normals2);
    // 为圆柱体分割创建分割对象，并设置参数
    seg.setOptimizeCoefficients(true);  // 设置对估计的模型系数需要进行优化
    seg.setModelType(pcl::SACMODEL_CYLINDER);  // 设置分割模型为圆柱型
    seg.setMethodType(pcl::SAC_RANSAC);  // 设置采用RANSAC作为算法的参数估计方法
    seg.setNormalDistanceWeight(0.1);  // 设置表面法线权重系数
    seg.setMaxIterations(5000);        // 设置迭代的最大次数
    seg.setDistanceThreshold(0.05);  // 设置内点到模型的距离允许最大值
    seg.setRadiusLimits(0, 0.1);  // 设置估计出圆柱模型的半径范围
    seg.setInputCloud(cloud_filtered2);
    seg.setInputNormals(normals2);
    // 获取圆柱模型系数和圆柱上的点
    seg.segment(*inliers_cylinder, *coefficients_cylinder);

    std::ofstream outfile;
    outfile.open("cylinder.txt");
    outfile << *coefficients_cylinder << std::endl;
    outfile << "values0、1、2分别为圆柱轴线上其中一个点的x、y、z坐标"
            << std::endl;
    outfile << "values3、4、5分别为圆柱轴线的x、y、z方向向量" << std::endl;
    outfile << "values6为圆柱半径" << std::endl;
    outfile.close();
    // 存储点云到输出文件
    pcl::PCDWriter writer;
    extract.setInputCloud(cloud_filtered2);
    extract.setIndices(inliers_cylinder);
    extract.setNegative(false);
    pcl::PointCloud<pcl::PointXYZ>::Ptr cloud_cylinder(
        new pcl::PointCloud<pcl::PointXYZ>);
    extract.filter(*cloud_cylinder);
    if (cloud_cylinder->points.empty())
        std::cout << "Can't find the cylindrical component." << std::endl;
    else {
        writer.write("cylinder.pcd", *cloud_cylinder, false);
    }
    // 可视化
    pcl::visualization::CloudViewer viewer("cloud_cylinder");
    viewer.showCloud(cloud_cylinder);
    while (!viewer.wasStopped()) {
    }
    return (0);
}
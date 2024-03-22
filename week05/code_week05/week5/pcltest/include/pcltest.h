#include <pcl/ModelCoefficients.h>
#include <pcl/features/normal_3d.h>
#include <pcl/filters/conditional_removal.h>  //条件滤波器头文件
#include <pcl/filters/extract_indices.h>
#include <pcl/filters/passthrough.h>  //直通滤波头文件
#include <pcl/filters/project_inliers.h>
#include <pcl/filters/radius_outlier_removal.h>       //半径滤波器头文件
#include <pcl/filters/statistical_outlier_removal.h>  //统计滤波器头文件
#include <pcl/filters/voxel_grid.h>                   //体素滤波器头文件
#include <pcl/io/pcd_io.h>    //PCD读写类相关的头文件
#include <pcl/point_cloud.h>  // for PointCloud
#include <pcl/point_types.h>  //PCL中支持的点类型的头文件
#include <pcl/sample_consensus/method_types.h>
#include <pcl/sample_consensus/model_types.h>
#include <pcl/segmentation/sac_segmentation.h>
#include <pcl/visualization/cloud_viewer.h>  //可视化
#include <pcl/visualization/pcl_visualizer.h>

#include <iostream>  //标准C++库中的输入输出的头文件
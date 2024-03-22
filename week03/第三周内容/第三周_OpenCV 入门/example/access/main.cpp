#include <iostream>
#include <opencv2/core/matx.hpp>
#include <opencv2/imgcodecs.hpp>
#include <opencv2/opencv.hpp>
#include "example.h"

int main()
{
    cv::Mat image = cv::imread("../../data/1.jpg");

    //指针访问cv::Mat参数
    for (int i = 0; i < image.rows; i++)
    {
        cv::Vec3b* data =
            image.ptr<cv::Vec3b>(i);    //指针加速
        for (int j = 0; j < image.cols + 0; j++)
        {
            //std::cout << data[j] << std::endl;
            //修改每一个像素的第一个值为255（b）
            data[j][0] = 255;
        }
    }
    cv::namedWindow("演示输出图像", cv::WINDOW_NORMAL);
    cv::resizeWindow("演示输出图像",
                     720 * image.cols / image.rows, 720);
    cv::imshow("演示输出图像", image);
    //如果不加waitkey,显示窗口一闪而过就结束了
    cv::waitKey(0);
}

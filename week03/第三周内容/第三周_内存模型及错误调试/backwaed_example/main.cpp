#include <iostream>
#include <opencv2/core/matx.hpp>
#include <opencv2/imgcodecs.hpp>
#include <opencv2/opencv.hpp>
#include "example.h"

int main()
{
    cv::Mat image = cv::imread("../../data/1.jpg");
    cv::namedWindow("演示输出图像", cv::WINDOW_NORMAL);
    cv::resizeWindow("演示输出图像",
                     720, 720);
    cv::imshow("演示输出图像", image);
    //如果不加waitkey,显示窗口一闪而过就结束了
    cv::waitKey(0);
}

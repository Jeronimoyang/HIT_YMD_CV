#include <opencv2/core/hal/interface.h>
#include <iostream>
#include <opencv2/core/matx.hpp>
#include <opencv2/core/types.hpp>
#include <opencv2/imgcodecs.hpp>
#include <opencv2/imgproc.hpp>
#include <opencv2/opencv.hpp>
#include "example.h"

int main()
{
    cv::Mat image = cv::imread("../picture/dog.jpg");
    cv::Mat gray;
    //访问以下坐标点的像素值
    cv::Point2i point1(90, 25);
    cv::Point2i point2(152, 96);
    cv::Point2i point3(561, 36);
    cv::Point2i point4(326, 514);
    cv::Point2i point5(422, 46);

    
    cv::namedWindow("演示输出图像", cv::WINDOW_NORMAL);
    cv::imshow("演示输出图像", image);
    //如果不加waitkey,显示窗口一闪而过就结束了
    cv::waitKey(0);
}

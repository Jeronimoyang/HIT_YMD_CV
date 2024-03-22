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
    cv::Mat image = cv::imread("../picture/apple.jpeg");


    cv::imshow("演示输出图像", image);
    //如果不加waitkey,显示窗口一闪而过就结束了
    cv::waitKey(0);
}

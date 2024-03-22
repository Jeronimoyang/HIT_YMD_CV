#include <iostream>
#include <opencv2/core/matx.hpp>
#include <opencv2/imgcodecs.hpp>
#include <opencv2/opencv.hpp>
#include "example.h"

int main()
{
    cv::Mat image = cv::imread("../../data/1.jpg");
    std::vector<cv::Mat> channels;
    //通道分离
    cv::split(image, channels);

    //分别得到不同的颜色分量
    cv::Mat blue, green, red, gray;
    blue = channels.at(0);
    green = channels.at(1);
    red = channels.at(2);
    cv::cvtColor(image, gray,
                 cv::COLOR_BGR2GRAY);    //转为灰度图
    cv::namedWindow("演示输出图像", cv::WINDOW_NORMAL);
    cv::resizeWindow("演示输出图像",
                     720 * image.cols / image.rows, 720);
    cv::namedWindow("blue", cv::WINDOW_NORMAL);
    cv::resizeWindow("blue", 720 * image.cols / image.rows,
                     720);
    cv::namedWindow("green", cv::WINDOW_NORMAL);
    cv::resizeWindow("green", 720 * image.cols / image.rows,
                     720);
    cv::namedWindow("red", cv::WINDOW_NORMAL);
    cv::resizeWindow("red", 720 * image.cols / image.rows,
                     720);
    cv::namedWindow("gray", cv::WINDOW_NORMAL);
    cv::resizeWindow("gray", 720 * image.cols / image.rows,
                     720);
    cv::imshow("blue", blue);
    cv::imshow("green", green);
    cv::imshow("red", red);
    cv::imshow("gray", gray);
    cv::imshow("演示输出图像", image);
    //如果不加waitkey,显示窗口一闪而过就结束了
    cv::waitKey(0);
}

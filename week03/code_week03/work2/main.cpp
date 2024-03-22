#include <opencv2/core/hal/interface.h>

#include <fstream>
#include <iostream>
#include <opencv2/core/matx.hpp>
#include <opencv2/core/types.hpp>
#include <opencv2/imgcodecs.hpp>
#include <opencv2/imgproc.hpp>
#include <opencv2/opencv.hpp>

#include "example.h"

int main() {
    cv::Mat image = cv::imread("../picture/dog.jpg");
    cv::Mat gray;
    // 访问以下坐标点的像素值
    cv::Point2i point1(90, 25);
    cv::Point2i point2(152, 96);
    cv::Point2i point3(561, 36);
    cv::Point2i point4(326, 514);
    cv::Point2i point5(422, 46);
    std::cout << "原图像指定点的像素值：" << std::endl;
    std::cout << "point1(90, 25): " << image.at<cv::Vec3b>(90, 25) << std::endl;
    std::cout << "point2(152, 96): " << image.at<cv::Vec3b>(152, 96)
              << std::endl;
    std::cout << "point3(561, 36): " << image.at<cv::Vec3b>(561, 36)
              << std::endl;
    std::cout << "point4(326, 514): " << image.at<cv::Vec3b>(326, 514)
              << std::endl;
    std::cout << "point5(422, 46): " << image.at<cv::Vec3b>(422, 46)
              << std::endl;

    std::ofstream outfile;
    outfile.open("output.txt");
    outfile << "原图像指定点的像素值：" << std::endl;
    outfile << "point1(90, 25): " << image.at<cv::Vec3b>(90, 25) << std::endl;
    outfile << "point1(152, 96): " << image.at<cv::Vec3b>(152, 96) << std::endl;
    outfile << "point1(561, 36): " << image.at<cv::Vec3b>(561, 36) << std::endl;
    outfile << "point1(326,514): " << image.at<cv::Vec3b>(326, 514)
            << std::endl;
    outfile << "point1(422,46): " << image.at<cv::Vec3b>(422, 46) << std::endl;

    cv::namedWindow("演示输出图像", cv::WINDOW_NORMAL);
    cv::imshow("演示输出图像", image);
    cv::imwrite("../bin/dog.jpg", image);

    cv::cvtColor(image, gray, cv::COLOR_BGR2GRAY);
    cv::namedWindow("gray", cv::WINDOW_NORMAL);
    cv::imshow("gray", gray);
    cv::imwrite("../bin/graydog.jpg", gray);

    std::cout << "灰度图像指定点的像素值：" << std::endl;
    std::cout << "point1(90, 25): " << gray.at<int>(90, 25) << std::endl;
    std::cout << "point2(152, 96): " << gray.at<int>(152, 96) << std::endl;
    std::cout << "point3(561, 36): " << gray.at<int>(561, 36) << std::endl;
    std::cout << "point4(326, 514): " << gray.at<int>(326, 514) << std::endl;
    std::cout << "point5(422, 46): " << gray.at<int>(422, 46) << std::endl;

    outfile << "灰度图像指定点的像素值：" << std::endl;
    outfile << "point1(90, 25): " << gray.at<int>(90, 25) << std::endl;
    outfile << "point2(152, 96): " << gray.at<int>(152, 96) << std::endl;
    outfile << "point3(561, 36): " << gray.at<int>(561, 36) << std::endl;
    outfile << "point4(326, 514): " << gray.at<int>(326, 514) << std::endl;
    outfile << "point5(422, 46): " << gray.at<int>(422, 46) << std::endl;
    outfile.close();
    // 如果不加waitkey,显示窗口一闪而过就结束了
    cv::waitKey(0);
}

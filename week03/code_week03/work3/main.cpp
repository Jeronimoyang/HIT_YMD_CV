#include <opencv2/core/hal/interface.h>

#include <iostream>
#include <opencv2/core/matx.hpp>
#include <opencv2/core/types.hpp>
#include <opencv2/imgcodecs.hpp>
#include <opencv2/imgproc.hpp>
#include <opencv2/opencv.hpp>

#include "example.h"

int main() {
    cv::Mat image = cv::imread("../picture/apple.jpeg");
    cv::imshow("演示输出图像", image);

    // 将原图像转换成hsv版
    cv::Mat hsv_image;
    cv::cvtColor(image, hsv_image, cv::COLOR_BGR2HSV);
    cv::Scalar lower_red(0, 43, 43);
    cv::Scalar upper_red(10, 255, 255);
    cv::inRange(hsv_image, lower_red, upper_red, hsv_image);
    cv::erode(hsv_image, hsv_image, (10, 10));
    cv::dilate(hsv_image, hsv_image, (10, 10));
    // cv::imshow("hsv_image", hsv_image);

    // 框选苹果
    std::vector<std::vector<cv::Point>> contours;
    std::vector<cv::Vec4i> hierarchy;
    cv::findContours(hsv_image, contours, hierarchy, cv::RETR_EXTERNAL,
                     cv::CHAIN_APPROX_SIMPLE);
    std::vector<std::vector<cv::Point>> contours_conPoly(contours.size());
    std::vector<cv::Rect> boundRect(contours.size());
    std::vector<cv::Point2f> center(contours.size());
    std::vector<float> radius(contours.size());
    for (int i = 0; i < contours.size(); i++) {
        cv::approxPolyDP(cv::Mat(contours[i]), contours_conPoly[i], 1, true);
        cv::minEnclosingCircle(contours_conPoly[i], center[i], radius[i]);
    }
    for (int i = 0; i < contours.size(); i++) {
        if (cv::contourArea(contours[i]) > 25) {
            cv::circle(image, center[i], (int)radius[i], cv::Scalar(255, 0, 0),
                       2, 8, 0);
        }
    }
    cv::imwrite("../bin/apple.jpg", image);
    cv::imshow("apple", image);

    // 如果不加waitkey,显示窗口一闪而过就结束了
    cv::waitKey(0);
}

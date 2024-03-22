#include <iostream>
/**
 * @file one.cpp
 * @brief HITCRT视觉组竞培营第五次作业错误代码示例
 * @author Cantorxu (1273797180@qq.com)
 * @date 2022-08-07
 *
 * @copyright Copyright (C) {2022}, HITCRT_VISION, all rights reserved.
 *
 * @par 修改日志:
 * <table>
 * <tr><th>Date       <th>Author  <th>Description
 * <tr><td>2022-08-07 <td>Cantorxu  <td>
 * </table>
 */
#include <opencv2/highgui.hpp>
#include <opencv2/opencv.hpp>

int main(void) {
    cv::Mat hello = cv::imread("../picture/hello.jpeg");
    cv::imshow("原图", hello);
    int width = hello.size().width;
    int height = hello.size().height;
    for (int i = 0; i < height; i++) {
        for (int j = 0; j < width; j++) {
            for (int k = 0; k < 3; k++) {
                // 进行阈值分割
                if (hello.at<cv::Vec3b>(i, j)[k] > 200)
                    hello.at<cv::Vec3b>(i, j)[k] = 255;
                else
                    hello.at<cv::Vec3b>(i, j)[k] = 0;
            }
        }
    }
    cv::imshow("对比度增加", hello);
    cv::waitKey(0);
    return 0;
}
// 错误1：第24、25行height和width写反了，（i，j）中i代表行数，j代表列数，width代表宽度（即列），height代表高度（即行）
// 错误：第28、29、31行3b写成3i了，这里要写uchar型
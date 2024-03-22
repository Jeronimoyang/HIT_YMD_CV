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
  for (int i = 0; i < width; i++) {
    for (int j = 0; j < height; j++) {
      for (int k = 0; k < 3; k++) {
        //进行阈值分割
        if (hello.at<cv::Vec3i>(i, j)[k] > 200)
          hello.at<cv::Vec3i>(i, j)[k] = 255;
        else
          hello.at<cv::Vec3i>(i, j)[k] = 0;
      }
    }
  }
  cv::imshow("对比度增加", hello);
  cv::waitKey(0);
  return 0;
}
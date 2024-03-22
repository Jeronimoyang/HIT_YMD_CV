# OpenV常用函数
Copyright (C) 2024, HITCRT_VISION, all rights reserved.  
Author: Mingqian Li(hitmickey@gmail.com)  
Time: 2023.8.6
## 图像处理
1、方框滤波函数——boxFilter()
```cpp
cv::boxFilter();
```
2、均值滤波函数

- 用一片图像区域中各个像素的均值来代替原图像中的各个像素值。
- 缺陷：不能很好地保护图像的细节
```cpp
cv::blur();
```
3、高斯滤波函数
图像处理中应用最广泛，通俗地讲，高斯滤波是对整幅图像进行加权平均的过程。
```cpp
cv::GaussianBlur();
```
4、中值滤波
用像素点邻域灰度值的中值来代替该像素点的灰度值，在去除脉冲噪声，椒盐噪声的同时保留图像的边缘细节。
```cpp
cv::medianBlur();
```
5、膨胀
对图像高亮部分进行“领域扩张”，效果图拥有比原图更大的高亮区域。
```cpp
cv::dilate();
```
6、腐蚀
原图中的高亮区域被蚕食，效果图拥有比原图更小的高亮区域。
```cpp
cv::erode();
```
7、尺寸缩放
将图像转换为指定尺寸的目标图像
```cpp
cv::resize();
```
8、阈值化
最简单的图像分割方法
```cpp
cv::threshold();
```
## 图像变换
1、canny算子
```cpp
cv::Canny();
```
2、sobel算子
```cpp
cv::Sobel();
```
3、Laplacian算子
```cpp
cv::Laplacian();
```
4、霍夫线变换
用于寻找图像中的直线
```cpp
cv::HoughLines();
```
5、霍夫圆变换
用于寻找图像中的圆
```cpp
cv::HoughCicles();
```
## 图像轮廓
1、寻找轮廓函数
```cpp
cv::findContours();
```
2、绘制轮廓函数
```cpp
cv::drawContours();
```
## 结尾
本文仅仅只列举出了OpenCV中实现功能的函数名，具体调用方法以及参数请自行查阅相关资料。

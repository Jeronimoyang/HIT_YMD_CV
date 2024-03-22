#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#include "omp.h"
// #include <iostream>
//  #include <algorithm>  //
//  #include <cmath>
//  #include <iostream>
//  #include <string>
//  #include <thread>
// #include <boost/thread.hpp>

void imageSmoothing(int **img) {
    for (int j = 1; j < 1920; j++) {
        for (int i = 1; i < 1080; i++) {
            img[i][j] = (img[i - 1][j] + img[i + 1][j] + img[i][j - 1] +
                         img[i][j + 1]) /
                        4;
            // 取某个像素周围四个点的平均值
        }
    }
}

void imageSmoothing_CPUoptimize(int **img)  // 面向CPU的优化（循环展开）
{
    for (int i = 1; i < 1920; i++) {
        for (int j = 1; j < 1080; j += 6) {
            img[i][j] = (img[i - 1][j] + img[i + 1][j] + img[i][j - 1] +
                         img[i][j + 1]) >>
                        2;
            img[i][j + 1] = (img[i - 1][j + 1] + img[i + 1][j + 1] + img[i][j] +
                             img[i][j + 2]) >>
                            2;
            img[i][j + 2] = (img[i - 1][j + 2] + img[i + 1][j + 2] +
                             img[i][j + 1] + img[i][j + 3]) >>
                            2;
            img[i][j + 3] = (img[i - 1][j + 3] + img[i + 1][j + 3] +
                             img[i][j + 2] + img[i][j + 4]) >>
                            2;
            img[i][j + 4] = (img[i - 1][j + 4] + img[i + 1][j + 4] +
                             img[i][j + 3] + img[i][j + 5]) >>
                            2;
            img[i][j + 5] = (img[i - 1][j + 5] + img[i + 1][j + 5] +
                             img[i][j + 4] + img[i][j + 6]) >>
                            2;
        }
    }
}

void imageSmoothing_CacheOptimize(int **img)  // 面向Cache的优化（分块处理）
{
    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 16; j++) {
            int L2block = i * 240;
            int L1block = j * 15;
            for (int colPtr = 1; colPtr <= 15; colPtr++) {
                int nowCol = colPtr + L1block + L2block;
                if (nowCol == 1919) break;
                for (int k = 1; k < 1080; k++) {
                    img[nowCol][k] = (img[nowCol - 1][k] + img[nowCol + 1][k] +
                                      img[nowCol][k - 1] + img[nowCol][k + 1]) /
                                     4;
                }
            }
        }
    }
}

void imageSmoothing_NormalOptimize(int **img)  // 针对复杂运算简化的优化
{
    for (int j = 1; j < 1920; j++) {
        for (int i = 1; i < 1080; i++) {
            img[i][j] = (img[i - 1][j] + img[i + 1][j] + img[i][j - 1] +
                         img[i][j + 1]) >>
                        2;
        }
    }
}

int main() {
    int **img = (int **)malloc(
        sizeof(int *) *
        1922);  // 在1920*1080的图像边缘增加一圈像素，防止滑窗溢出图像
    srand((int)time(NULL));  // 随机种子
    int number = 0;

    for (int i = 0; i < 1922; i++) {
        img[i] = (int *)malloc(
            sizeof(int) *
            1082);  // 在1920*1080的图像边缘增加一圈像素，防止滑窗溢出图像
        for (int j = 0; j < 1082; j++)  // 为每个图像添加高斯噪声
        {
            number = rand();
            img[i][j] = number;
        }
    }

    clock_t startTimeVal = clock();
    for (int i = 0; i < 10000; i++) {
        imageSmoothing(img);
    }
    clock_t finishTimeVal = clock();
    printf("未作优化 执行10000次用时: %f 秒\n",
           (double)(finishTimeVal - startTimeVal) / CLOCKS_PER_SEC);

    double startTimeVal8 = omp_get_wtime();
    {
#pragma omp parallel for num_threads(12)  // 将循环分为6个线程
        for (int i = 0; i < 10000; i++) {
            imageSmoothing(img);
        }
    }
    double finishTimeVal8 = omp_get_wtime();
    printf("多线程优化 执行10000次用时: %f 秒\n",
           (double)(finishTimeVal8 - startTimeVal8));

    startTimeVal = clock();
    for (int i = 0; i < 10000; i++) {
        imageSmoothing_CPUoptimize(img);
    }
    finishTimeVal = clock();
    printf("面向CPU的优化 执行10000次用时: %f 秒\n",
           (double)(finishTimeVal - startTimeVal) / CLOCKS_PER_SEC);

    startTimeVal = clock();
    for (int i = 0; i < 10000; i++) {
        imageSmoothing_CacheOptimize(img);
    }
    finishTimeVal = clock();
    printf("面向Cache的优化 执行10000次用时: %f 秒\n",
           (double)(finishTimeVal - startTimeVal) / CLOCKS_PER_SEC);

    startTimeVal = clock();
    for (int i = 0; i < 10000; i++) {
        imageSmoothing_NormalOptimize(img);
    }
    finishTimeVal = clock();
    printf("针对复杂运算简化的优化 执行10000次用时: %f 秒\n",
           (double)(finishTimeVal - startTimeVal) / CLOCKS_PER_SEC);
    return 0;
}

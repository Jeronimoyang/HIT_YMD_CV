#include<stdlib.h>
#include<stdio.h>
#include<time.h>
#include "omp.h"
//#include <iostream>
// #include <algorithm>  //
// #include <cmath>
// #include <iostream>
// #include <string>
// #include <thread>
//#include <boost/thread.hpp>

void imageSmoothing(int** img)
{
    for(int j = 1; j < 1920; j++)
    {
        for (int i = 1; i < 1080; i++)
        {
            img[i][j] = (img[i-1][j] + img[i+1][j]+img[i][j-1] + img[i][j+1] ) / 4; 
            //取某个像素周围四个点的平均值
        }
    }
}

void imageSmoothing_CPUoptimize(int **img) //面向CPU的优化（循环展开）
{
    /**
     * @brief 在此输入你的代码
     */
}

void imageSmoothing_CacheOptimize(int **img) //面向Cache的优化（分块处理）
{
    /**
     * @brief 在此输入你的代码
     */
}

void imageSmoothing_NormalOptimize(int **img) //针对复杂运算简化的优化
{
    /**
     * @brief 在此输入你的代码
     */
}


int main()
{   
   
    int** img = (int**)malloc(sizeof(int*) * 1922);//在1920*1080的图像边缘增加一圈像素，防止滑窗溢出图像
    srand((int)time(NULL));//随机种子
    int number=0;
    
    for (int i = 0; i < 1922; i++)
    {
        img[i] = (int*)malloc(sizeof(int) * 1082);//在1920*1080的图像边缘增加一圈像素，防止滑窗溢出图像
        for (int j = 0; j < 1082; j++)  //为每个图像添加高斯噪声
        {
            number = rand();
            img[i][j] = number;
        }
    }   
    
    clock_t startTimeVal = clock();
    for(int i = 0; i < 10000; i++)
    {
        imageSmoothing(img);
    }
    clock_t finishTimeVal = clock();
    printf("未作优化 执行10000次用时: %f 秒\n", (double)(finishTimeVal - startTimeVal) / CLOCKS_PER_SEC);

    double startTimeVal8 = omp_get_wtime();
    {
        #pragma omp parallel for num_threads(12)//将循环分为6个线程
        for(int i = 0; i < 10000; i++)
        {
            imageSmoothing(img);
        }
    }
    double finishTimeVal8 = omp_get_wtime();
    printf("多线程优化 执行10000次用时: %f 秒\n", (double)(finishTimeVal8 - startTimeVal8));

    return 0;
}



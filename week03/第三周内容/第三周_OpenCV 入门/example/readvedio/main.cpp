#include <iostream>
#include <opencv2/imgcodecs.hpp>
#include <opencv2/opencv.hpp>
#include "example.h"

int main()
{
    // 打开摄像头
    // cv::VideoCapture capture(0);

    // 打开文件
    cv::VideoCapture capture("../../data/1.mp4");

    if (!capture.isOpened())
    {
        printf("could not read this video file...\n");
        return -1;
    }

    int fps = capture.get(cv::CAP_PROP_FPS);
    printf("current fps : %d \n", fps);

    cv::Mat frame;
    namedWindow("camera-demo", cv::WINDOW_AUTOSIZE);

    while (capture.read(frame))
    {
        imshow("camera-demo", frame);
        char key = cv::waitKey(27);
        if (key == 'q')
        {
            break;
        }
    }
    capture.release();
    return 0;
}

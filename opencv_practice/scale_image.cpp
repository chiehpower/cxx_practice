#include <opencv2/opencv.hpp>

#include <opencv2/core.hpp>
#include <opencv2/imgcodecs.hpp>
#include <opencv2/highgui.hpp>

/// Both can work.


/*
 * @Author: Chieh
 * @Description: Practice how to scale a single image
 * @FilePath: scale_image.cpp
 */

#include <iostream>
using namespace std;
using namespace cv;

int main(int argc, char** argv)
{
    static const int inputH = 224;
    static const int inputW = 224;
    // static const int inputC = 3;
    std::string image_path = "test.png";
    Mat image = imread(image_path, IMREAD_COLOR);

    cout << image.size() << endl;

    auto input_size = cv::Size(inputW, inputH);
    Mat resized;
    cv::resize(image,resized,input_size,0,0,INTER_LINEAR);

    cout << "resized image : " << resized.size() << endl;

    cv::Mat Scaleimg;
    resized.convertTo(Scaleimg, CV_32F, 1.0 / 255.0, 0);
    
    cout << "Scale image : " << Scaleimg.size() << endl;

    Vec3f bgrPixel = Scaleimg.at<Vec3f>(100, 100);
    cout << "Let's see output: " << bgrPixel << endl;
}
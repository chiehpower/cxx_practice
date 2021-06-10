/*
 * @Author: Chieh
 * @Description: Practice how to exchange the dimensions.
 * @FilePath: exchange_dim.cpp
 */


#include <opencv2/opencv.hpp>
/// Both can work.
#include <opencv2/core.hpp>
#include <opencv2/imgcodecs.hpp>
#include <opencv2/highgui.hpp>



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
    auto input_size = cv::Size(inputW, inputH);
    Mat resized;
    cv::resize(image,resized,input_size,0,0,INTER_LINEAR);
    cv::Mat Scaleimg;
    resized.convertTo(Scaleimg, CV_32F, 1.0 / 255.0, 0);
    Vec3f bgrPixel = Scaleimg.at<Vec3f>(100, 100);

    cout << " Scale Image :" << Scaleimg.size() << endl;



}
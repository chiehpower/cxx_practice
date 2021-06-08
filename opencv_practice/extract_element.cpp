/*
 * @Author: Chieh
 * @Description: Practice how to extract the element from the Mat image
 * @FilePath: extract_element.cpp
 */

#include <opencv2/opencv.hpp>

// #include <opencv2/core.hpp>
// #include <opencv2/imgcodecs.hpp>
// #include <opencv2/highgui.hpp>

/// Both can work.

#include <iostream>
using namespace std;
using namespace cv;

int main(int argc, char** argv)
{
    std::string image_path = "starry_night.jpg";
    Mat img = imread(image_path, IMREAD_COLOR);

    if(img.empty())
    {
        std::cout << "Could not read the image: " << image_path << std::endl;
        return 1;
    }

    cout << img.size() << endl;

    auto input_size = cv::Size(28, 28);
    Mat resized;
    resize(img,resized,input_size,0,0,INTER_LINEAR);
    
    cout << "resized.size(): " << resized.size() << endl;

    cout << "resized: " << resized << endl;

    static const int inputH = 28;
    static const int inputW = 28;

    for (int i = 0; i < inputH * inputW; i++){
        int rowval = i / inputW;
        int colval = i % inputH;
        Vec3b bgrPixel = resized.at<Vec3b>(rowval, colval);
        int cblue = bgrPixel[0];
        int cgreen = bgrPixel[1];
        int cred = bgrPixel[2];
        cout << "bgrPixel > " bgrPixel << " | " << cblue << " | " << cgreen << " | " << cred <<  endl;
    }
    
    // imwrite("test_writeimage.png", img);

    return 0;
}

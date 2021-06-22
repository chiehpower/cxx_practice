/*
 * @Author: Chieh
 * @Description: Practice how to exchange the dimensions.
 * @FilePath: exchange_dim.cpp
 */


#include <opencv2/opencv.hpp>
/// Both can work.
// #include <opencv2/core.hpp>
// #include <opencv2/imgcodecs.hpp>
// #include <opencv2/highgui.hpp>


#include <iostream>
using namespace std;
using namespace cv;

int main(int argc, char** argv)
{
    static const int height = 224;
    static const int width = 224;
    static const int channels = 3;

    std::string image_path = "test.png";
    Mat image = imread(image_path, IMREAD_COLOR);
    cout << "Image H: " << image.size().height << " W: " << image.size().width << " C: " << image.channels() << endl;

    float total = height * width * channels;
    float* hostInputBuffer = static_cast<float*>(&total);
    cout << "Pass here.\n";

    // Convert HWC to CHW
    for (int c = 0; c < channels; ++c)
    {
        for (int h = 0; h < height; ++h)
        {
            for (int w = 0; w < width; ++w)
            {   
                cout << "C: " << c << " H: " << h << " W: " << w << endl;
                Vec3f bgrPixel = image.at<Vec3f>(h, w);
                int dstIdx = c * height * width + h * width + w;
                cout << "dstIdx: " << dstIdx << endl;
                hostInputBuffer[dstIdx] = bgrPixel[c];

            }
        }
    }
    return 0;
}
// This way is correct but the issue should be happen at the line 30.
// This script still has some issues.
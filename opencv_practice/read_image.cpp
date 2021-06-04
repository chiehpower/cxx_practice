// #include <opencv2/opencv.hpp>

#include <opencv2/core.hpp>
#include <opencv2/imgcodecs.hpp>
#include <opencv2/highgui.hpp>

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

    // Mat image;
    // image = imread("/home/chieh/Pictures/3.png", IMREAD_COLOR);
    
    cout << img.size() << endl;

    imwrite("test_writeimage.png", img);

    return 0;
}

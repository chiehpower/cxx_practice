   
   // Create a 2 dims array
   
   // Unscale back to raw image space
    vector<float> row;
    row.assign(inputW,0);//allocate a row size
    vector< vector<float> > array_2D;
    array_2D.assign(inputH,row);

    for (int i = 0; i < inputH; ++i)
    {
        for (int j = 0; j < inputW; ++j)
        {
            array_2D[i][j] = output[i*inputW + j];
        }
    }

    cv::Mat matAngles(array_2D.size(), array_2D.at(0).size(), CV_64FC1);
    for(int i=0; i<matAngles.rows; ++i)
        for(int j=0; j<matAngles.cols; ++j)
            if (array_2D.at(i).at(j) > 0.5){
                matAngles.at<double>(i, j) = 255 * array_2D.at(i).at(j);
            }
            else{
                matAngles.at<double>(i, j) = array_2D.at(i).at(j);
            }
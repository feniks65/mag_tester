#include "opencv2/highgui/highgui.hpp"
#include "opencv2/imgproc/imgproc.hpp"

#include <vector>
#include <iostream>

#include "Tester.hpp"
#include "Preparator.hpp"
#include "HoughTransform.hpp"

using namespace std;
using namespace cv;

Mat AlgHistogram::rotate(Mat inputImage)
{
  Mat outputImage;
  //=====================
  double angle = 90;  // or 270
Size src_sz = inputImage.size();
Size dst_sz(src_sz.height, src_sz.width); 

int len = max(inputImage.cols, inputImage.rows); 
Point2f center(len/2., len/2.);
Mat rot_mat = getRotationMatrix2D(center, angle, 1.0);
warpAffine(inputImage, outputImage, rot_mat, dst_sz);
//=============================
  return outputImage;
}

Mat AlgHistogram::drawChart(Mat inputImage)
{
  Mat outputImage;
  //write histogram
  int* histogram = new int[width]; 
for(i=0; i<width; i++)
   histogram[i] = height - countNonZero(inputImage.col(i));

  return outputImage;
}

Mat AlgHistogram::transform(Mat inputImage)
{
  Mat outputImage, rotatedImage, chartImage;
  
  rotatedImage = this->rotate(inputImage);
  chartImage = this->drawChart(rotatedImage);
  
  return chartImage;
}

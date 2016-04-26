#include "opencv2/highgui/highgui.hpp"
#include "opencv2/imgproc/imgproc.hpp"

#include "Definitions.hpp"
#include "Preparator.hpp"

using namespace cv;

Mat Preparator::prepare(const char* pathToImage)
{
	Mat image, gray_image, after_threshold;

	image = imread( pathToImage, 1 );
	cvtColor( image, gray_image, CV_BGR2GRAY );

//thresholding
	threshold( gray_image, after_threshold, threshold_value, max_BINARY_value, threshold_type );

	return after_threshold;
}

Mat Preparator::blur(Mat inputImage)
{
	Mat outputImage;

	cv::blur(inputImage, outputImage, cv::Size(25, 25));

	return outputImage;
}

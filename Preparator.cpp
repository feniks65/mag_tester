#include "opencv2/highgui/highgui.hpp"
#include "opencv2/imgproc/imgproc.hpp"
#include <string>

#include "Definitions.hpp"
#include "Preparator.hpp"

Mat Preparator::prepare(char* pathToImage, char *outputFilename)
{
	Mat image, gray_image, after_threshold;

	char outputFullPath[IMAGE_FILENAME_MAX_LENGTH] = {0};

	image = imread( pathToImage, 1 );
	cvtColor( image, gray_image, CV_BGR2GRAY );

//thresholding
	threshold( gray_image, after_threshold, threshold_value, max_BINARY_value, threshold_type );

//prepare path for output filename
	/*
	strcat(outputFullPath, outputFolderName);
	strcat(outputFullPath, "/");
	strcat(outputFullPath, outputPath);

	imwrite( outputFullPath, after_threshold );
*/
	return after_threshold;
}
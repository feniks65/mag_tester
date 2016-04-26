#include "opencv2/highgui/highgui.hpp"
#include "opencv2/imgproc/imgproc.hpp"

#include <vector>

#include "Tester.hpp"
#include "HoughTransform.hpp"

using namespace std;
using namespace cv;

Mat HoughTransform::transform(Mat inputImage)
{
	Mat outputImage;
	vector<Vec4i> lines;

	//Canny line detector
	Canny(inputImage, outputImage, 50, 200, 3);

	//HoughLines(outputImage, lines, 1, CV_PI/180, 100 );
	HoughLinesP( outputImage, lines, 1, CV_PI/180, 80, 30, 10 );
  	for( size_t i = 0; i < lines.size(); i++ )
	{
    	Vec4i l = lines[i];
    	line( outputImage, Point(l[0], l[1]), Point(l[2], l[3]), Scalar(0,0,255), 3, CV_AA);
	}
  	return outputImage;
}

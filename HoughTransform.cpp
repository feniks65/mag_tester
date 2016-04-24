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

  	HoughLinesP(inputImage, lines, 1, CV_PI/180, 10, 50, 10 );
  	for( size_t i = 0; i < lines.size(); i++ )
	{
    	Vec4i l = lines[i];
    	line( inputImage, Point(l[0], l[1]), Point(l[2], l[3]), Scalar(0,0,255), 3, CV_AA);
	}
  	return inputImage;
}

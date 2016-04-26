#include "opencv2/highgui/highgui.hpp"
#include "opencv2/imgproc/imgproc.hpp"

#include <vector>
#include <iostream>

#include "Tester.hpp"
#include "Preparator.hpp"
#include "HoughTransform.hpp"

using namespace std;
using namespace cv;

Mat HoughTransform::transform(Mat inputImage)
{
	Mat toRGB, outputImage;
	vector<Vec4i> lines;
	Preparator prep;

	//Canny line detector
	//Canny(inputImage, outputImage, 50, 200, 3);

	inputImage = prep.blur(inputImage);

	 cvtColor(inputImage, toRGB, CV_GRAY2BGR);

	 HoughLinesP(inputImage, lines, 1, CV_PI/180, 5000, 0, 0);
	 cout << "lines number=" << lines.size() << endl;

//	  for( size_t i = 0; i < lines.size(); i++ )
//	  {
//	    Vec4i l = lines[i];
//	    line( toRGB, Point(l[0], l[1]), Point(l[2], l[3]), Scalar(0,0,255), 3, CV_AA);
//	  }

	    // draw lines
	    for( size_t i = 0; i < lines.size(); i++ )
	    {
		        float rho = lines[i][0], theta = lines[i][1];
		    	if( theta>CV_PI/180*80 && theta<CV_PI/180*100)
		    	        {
		        Point pt1, pt2;
		        double a = cos(theta), b = sin(theta);
		        double x0 = a*rho, y0 = b*rho;
		        pt1.x = cvRound(x0 + 1000*(-b));
		        pt1.y = cvRound(y0 + 1000*(a));
		        pt2.x = cvRound(x0 - 1000*(-b));
		        pt2.y = cvRound(y0 - 1000*(a));
		        line( toRGB, pt1, pt2, Scalar(0,0,255), 3, CV_AA);
	    	        }
	    }

  	return toRGB;
}

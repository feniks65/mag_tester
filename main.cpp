#include "opencv2/highgui/highgui.hpp"
#include "opencv2/imgproc/imgproc.hpp"

#include <iostream>
#include "Tester.hpp"
#include "Preparator.hpp"
#include "AlgHistogram.hpp"
#include "EnergyMap.hpp"
#include "HoughTransform.hpp"


using namespace std;
using namespace cv;

int main()
{
	const char *exampleSample = "probki/SkanyRazem/dokument004.jpg";
	const char *windowName = "probka";
	Mat preparedImage;

	Preparator samplePrep;

	preparedImage = samplePrep.prepare(exampleSample);

	namedWindow( windowName, CV_WINDOW_NORMAL );

	imshow(windowName, preparedImage);


//wait to see the result
  while(true)
  {
    int c;
    c = waitKey( 20 );
    if( (char)c == 27 )
      { break; }
   }

	return 0;
}
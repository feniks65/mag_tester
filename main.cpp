#include "opencv2/highgui/highgui.hpp"
#include "opencv2/imgproc/imgproc.hpp"

#include <iostream>
#include "Tester.hpp"
#include "Preparator.hpp"
#include "HoughTransform.hpp"
#include "AlgHistogram.hpp"
#include "EnergyMap.hpp"



using namespace std;
using namespace cv;

int main()
{
	const char *exampleSample = "probki/SkanyRazem/dokument004.jpg";
	const char *windowName = "probka";
	
	Mat preparedImage;
	Preparator samplePrep;
	HoughTransform hg;

	preparedImage = samplePrep.prepare(exampleSample);

	hg.transform(preparedImage);

	namedWindow( windowName, CV_WINDOW_NORMAL );

	imshow(windowName, preparedImage);

//wait to see the result
  while(true)
  {
    int c;
    c = waitKey( 20 );
    if( (char)c == 27 )//if ESC triggered then exit the image window
      { break; }
   }

	return 0;
}

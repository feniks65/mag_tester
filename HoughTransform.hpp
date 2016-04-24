#ifndef HOUGHTRANSFORM_HPP
#define HOUGHTRANSFORM_HPP

#include "Tester.hpp"

using namespace cv;

class HoughTransform// : protected Tester
{
public:
	HoughTransform()
	{

	}
	Mat transform(Mat inputImage);
};


#endif

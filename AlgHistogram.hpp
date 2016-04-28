#ifndef ALGHISTOGRAM_HPP
#define ALGHISTOGRAM_HPP

#include "Tester.hpp"

class AlgHistogram : protected Tester
{
private:
	Mat rotate(Mat inputImage);
	Mat drawHistogram(Mat inputImage);
public:
	Mat transform(Mat inputImage);
};


#endif

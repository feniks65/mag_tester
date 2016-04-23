#include <iostream>
#include "Tester.hpp"
#include "Preparator.hpp"
#include "AlgHistogram.hpp"
#include "EnergyMap.hpp"
#include "HoughTransform.hpp"


using namespace std;

int main()
{
	Mat preparedImage;

	Preparator samplePrep;

	preparedImage = samplePrep.prepare();


	return 0;
}
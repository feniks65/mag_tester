#ifndef PREPARATOR_HPP
#define PREPARATOR_HPP

#include "Definitions.hpp"

using namespace cv;

class Preparator
{
private:
	char pathToSample[IMAGE_FILENAME_MAX_LENGTH];

	static int const threshold_value = 0; //HERE define threshold

  /* 0: Binary
     1: Binary Inverted
     2: Threshold Truncated
     3: Threshold to Zero
     4: Threshold to Zero Inverted
   */
	static int const threshold_type = 3;
	static int const max_value = 255;
	static int const max_type = 4;
	static int const max_BINARY_value = 255;
public:
	//Preparator(char* pathToImage, char *outputFilename);

	Mat prepare(const char* pathToImage);
};


#endif

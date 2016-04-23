#ifndef HOUGHTRANSFORM_HPP
#define HOUGHTRANSFORM_HPP

#include <string.h>
#include "Definitions.hpp"

class Preparator
{
private:
	char pathToSample[IMAGE_FILENAME_MAX_PATH];
	const char *outputFolderName = "output";
	int threshold_value = 0;

  /* 0: Binary
     1: Binary Inverted
     2: Threshold Truncated
     3: Threshold to Zero
     4: Threshold to Zero Inverted
   */
	int threshold_type = 3;
	int const max_value = 255;
	int const max_type = 4;
	int const max_BINARY_value = 255;
public:
	//Preparator(char* pathToImage, char *outputFilename);

	prepare(char* pathToImage, char *outputFilename);
};


#endif
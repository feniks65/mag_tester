#ifndef HOUGHTRANSFORM_HPP
#define HOUGHTRANSFORM_HPP

#include <string.h>

class Preparator
{
private:
	std::string pathToSample;
public:
	Preparator(std::string path)
	{
		pathToSample = path;
	}
};


#endif
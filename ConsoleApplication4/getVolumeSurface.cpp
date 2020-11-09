#include <iostream>
using namespace std;

double getVolumeSurface(double width, double height, double depth, double *volume, double *surfaceArea) {
	
	*volume = width * height * depth;
	*surfaceArea = 2 * (depth * width + depth * height + width * height);

	return 0;
}

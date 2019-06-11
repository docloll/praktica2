#include"pch.h"
#include <math.h>
float f5(float x, float y)
{
	float f = pow((cos(x) - cos(y)), 2.0) - pow((sin(x) - sin(y)), 2.0);
	return f;
}
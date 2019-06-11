#include"pch.h"
#include <math.h>
float x,y, res;
void func()
{
	res = pow((cos(x) - cos(y)), 2.0) - pow((sin(x) - sin(y)), 2.0);
}
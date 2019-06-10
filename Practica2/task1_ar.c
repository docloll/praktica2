#include "Header.h"

_Bool isInArea(double x, double y)
{
	if ((pow(x, 2) + pow(y, 2) >= 1) && (x > 0 && y > 0) && ((x * y) <= 1))
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

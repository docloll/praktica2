#include "header.h"

void f(const double* x, double* result)
{
	*result = (1 - tan(*x)) / (1 + tan(*x));
}

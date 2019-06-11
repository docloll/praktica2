#include"pch.h"
#include <stdio.h>
#include <math.h>
float func(float x, float y)
{
	float f = pow((cos(x) - cos(y)), 2.0) - pow((sin(x) - sin(y)), 2.0);
	return f;
}
void main()
{
	float x = 2;
	float y = 3;
	float fxy = func(x, y);
	printf("x=%f\r\n", x);
	printf("y=%f\r\n", y);
	printf("f(x,y)=%f\r\n", fxy);
	printf("vvedite x:\t");
	scanf_s("%f", &x);
	printf("vvedite y:\t");
	scanf_s("%f", &y);
	fxy = func(x, y);
	printf("f(x,y)=%f\r\n", fxy);
	printf("finish\t");
	system("pause");
}

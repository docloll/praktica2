#include"pch.h"
#include <stdio.h>
#include <math.h>
//Вариант 9
float x, y, ff;
void func()
{
	ff = pow((cos(x) - cos(y)), 2.0) - pow((sin(x) - sin(y)), 2.0);
}
void main()
{
	x = 2;
	y = 2;
	func();
	printf("x=%f\r\n", x);
	printf("y=%f\r\n", y);
	printf("f(x,y)=%f\r\n", ff);
	printf("vvedite x:\t");
	scanf_s("%f", &x);
	printf("vvedite y:\t");
	scanf_s("%f", &y);
	func();
	printf("f(x,y)=%f\r\n", ff);
	printf("finish\t");
	system("pause");
}

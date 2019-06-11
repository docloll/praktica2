#include"pch.h"
#include <stdio.h>
#include <math.h>

//Âàðàèíò 9
extern float x,y, res;
extern void func();
void main()
{
	x=5;
	y=5;
	func();
	printf("x=%f\r\n", x);
	printf("y=%f\r\n", y);
	printf("f(x,y)=%f\r\n", res);
	printf("vvedite x:\t");
	scanf_s("%f", &x);
	printf("vvedite y:\t");
	scanf_s("%f", &y);
	func();
	printf("f(x,y)=%f\r\n", res);
	printf("finish\t");
	system("pause");
}

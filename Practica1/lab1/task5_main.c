#include"pch.h"
#include <stdio.h>
#include <math.h>

//Âàðèàíò 9
void main()
{
	float x = 2;
	float y = 2;
	float ff = f5(x,y);
	printf("x=%f\r\n", x);
	printf("y=%f\r\n", y);
	printf("f(x,y)=%f\r\n", ff);
	printf("vvedite x:\t");
	scanf_s("%f", &x);
	printf("vvedite y:\t");
	scanf_s("%f", &y);
	ff = f5(x,y);
	printf("f(x,y)=%f\r\n", ff);
	printf("finish\t");
	system("pause");
}

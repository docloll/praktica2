#include "Header.h"

int main(void)
{
	double x, y;
	printf("put in 1 to task1;\nput in 2 to task2.\n");
	switch (_getch())
	{
	case'1':
		system("cls");
		printf("put in x and y for check area\nwrite x:\n");
		scanf_s("%lf", &x);
		printf("write y:\n");
		scanf_s("%lf", &y);
		if (isInArea(x, y))
		{
			printf("1\n");
		}
		else
		{
			printf("0\n");
		}
		break;
	case'2':
		system("cls");
		printf("write x \n");
		scanf_s("%lf", &x);
		printf("result: %.4lf\n", f(x));
		break;
	}
	system("pause");
	return 0;
}

#include<stdio.h>

int test04()
{
	int a1, b1;

	scanf_s("%d %d", &a1, &b1);

	double c1 = (a1 + b1) / 2.0;

	printf(" %d 和 %d 的平均值是 %f 。", a1, b1, c1);

	return 0;
}
#include<stdio.h>

int test04()
{
	int a1, b1;

	scanf_s("%d %d", &a1, &b1);

	double c1 = (a1 + b1) / 2.0;

	printf(" %d �� %d ��ƽ��ֵ�� %f ��", a1, b1, c1);

	return 0;
}
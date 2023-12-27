#include<stdio.h>

int test02()
{

	printf("请分别输入身高的英尺和英寸，例如输入\"5 7\"表示 5英尺 7英寸:");

	double foot, inch;

	scanf_s("%lf %lf", &foot, &inch);

	printf("身高是%f米\n",(foot + inch / 12)*0.3048);

	return 0;
}
#include<stdio.h>

int test02()
{

	printf("��ֱ�������ߵ�Ӣ�ߺ�Ӣ�磬��������\"5 7\"��ʾ 5Ӣ�� 7Ӣ��:");

	double foot, inch;

	scanf_s("%lf %lf", &foot, &inch);

	printf("�����%f��\n",(foot + inch / 12)*0.3048);

	return 0;
}
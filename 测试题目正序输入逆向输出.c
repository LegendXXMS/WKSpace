#include<stdio.h>

int test07() {


	int input, output;


	printf("�����������������λ��������   \n");


	scanf_s("%d", &input);

	int os, ts, hs;

	os = input / 100;

	ts = input / 10 % 10;

	hs = input % 10;

	output = hs * 100 + ts * 10 + os;

	printf("�����������Ϊ: %d\n", output);


	return 0;
}
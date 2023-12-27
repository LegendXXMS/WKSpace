#include<stdio.h>

int test07() {


	int input, output;


	printf("请输入正序输入的三位正整数：   \n");


	scanf_s("%d", &input);

	int os, ts, hs;

	os = input / 100;

	ts = input / 10 % 10;

	hs = input % 10;

	output = hs * 100 + ts * 10 + os;

	printf("逆向输出的数为: %d\n", output);


	return 0;
}
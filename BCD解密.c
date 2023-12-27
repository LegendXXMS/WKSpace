#include<stdio.h>

int main() {

	int input, output;

	printf("请输入【0,153】范围内的正整数： \n");

	scanf_s("%d", &input);

	int ts = input / 16;
	int os = input % 16;

	output = ts * 10 + os;
	   
	printf("输出的十进制数为：%d", output);

	return 0;
}
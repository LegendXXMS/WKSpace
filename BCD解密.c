#include<stdio.h>

int main() {

	int input, output;

	printf("�����롾0,153����Χ�ڵ��������� \n");

	scanf_s("%d", &input);

	int ts = input / 16;
	int os = input % 16;

	output = ts * 10 + os;
	   
	printf("�����ʮ������Ϊ��%d", output);

	return 0;
}
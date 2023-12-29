#include<stdio.h>

int test03() {

	int number;
	double avr;
	int count = 0;
	int sum = 0;

	printf("请输入需要计算平均值的数字：...\n");
	scanf_s("%d", &number);

	while(number != -1){
		sum += number;
		count++;
		scanf_s("%d", &number);
	}

	avr = sum / count;
	printf("平均数为:%f\n", avr);
	return 0;
}
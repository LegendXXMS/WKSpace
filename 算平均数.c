#include<stdio.h>

int test03() {

	int number;
	double avr;
	int count = 0;
	int sum = 0;

	printf("��������Ҫ����ƽ��ֵ�����֣�...\n");
	scanf_s("%d", &number);

	while(number != -1){
		sum += number;
		count++;
		scanf_s("%d", &number);
	}

	avr = sum / count;
	printf("ƽ����Ϊ:%f\n", avr);
	return 0;
}
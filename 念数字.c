//�������������Ӧƴ��������Ϊ����ʱ���"fu"��

#include<stdio.h>

int test10() {

	int digit;
	scanf_s("%d", &digit);

	if (digit < 0) {
		printf("fu ");
		digit = -digit;            //�������
	}

	int i = digit;
	int mask = 1;

	while (i > 9) {
		i /= 10;
		mask *= 10;                   //����   mask�͵�digitһ����λ������������
	}
	
	do
	{
		int d = digit / mask;                   //�������
		switch (d) {
		case 0:printf("ling"); break;
		case 1:printf("yi"); break;
		case 2:printf("er"); break;
		case 3:printf("san"); break;
		case 4:printf("si"); break;
		case 5:printf("wu"); break;
		case 6:printf("liu"); break;
		case 7:printf("qi"); break;
		case 8:printf("ba"); break;
		case 9:printf("jiu"); break;
		}
		if (mask > 9)printf(" ");              //����������һ��������ո�
		
		digit %= mask;                         //ȥ�����λ
		mask /= 10;                         

	} while (mask > 0);                     

	return 0;
}
#include<stdio.h>

int test01()
{
	/*����ǳ�����Ҫд�� const int AMOUNT = ...;*/
	int amount,price;
	
	printf("�������Ԫ����\n");
	scanf_s("%d", &price);

	printf("������Ʊ�棨Ԫ����\n");
	scanf_s("%d", &amount);

	int change = amount - price;

	printf("���� %d Ԫ��\n", change);

	return 0;
}
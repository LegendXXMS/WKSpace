#include<stdio.h>

int test01()
{
	/*如果是常量需要写成 const int AMOUNT = ...;*/
	int amount,price;
	
	printf("请输入金额（元）：\n");
	scanf_s("%d", &price);

	printf("请输入票面（元）：\n");
	scanf_s("%d", &amount);

	int change = amount - price;

	printf("找您 %d 元。\n", change);

	return 0;
}
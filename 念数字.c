//输入整数输出对应拼音，整数为负数时输出"fu"字

#include<stdio.h>

int test10() {

	int digit;
	scanf_s("%d", &digit);

	if (digit < 0) {
		printf("fu ");
		digit = -digit;            //负数情况
	}

	int i = digit;
	int mask = 1;

	while (i > 9) {
		i /= 10;
		mask *= 10;                   //计数   mask和的digit一样的位数。方便输入
	}
	
	do
	{
		int d = digit / mask;                   //正序输出
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
		if (mask > 9)printf(" ");              //如果不是最后一个则输出空格
		
		digit %= mask;                         //去掉最高位
		mask /= 10;                         

	} while (mask > 0);                     

	return 0;
}
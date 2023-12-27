#include<stdio.h>

int tes03()
{
	int hour1, minute1;
	int hour2, minute2;

	printf("请分别输入t1时刻和t2时刻，例如输入\"5 7\"表示 5时 7分");

	scanf_s("%d %d", &hour1, &minute1);
	scanf_s("%d %d", &hour2, &minute2);
	
	int t1 = hour1 * 60 + minute1; 
	int t2 = hour2 * 60 + minute2;

	int t = t2 - t1;

	printf("时间差微%d时%d分", t / 60, t % 60);

	return 0;
}
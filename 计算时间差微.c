#include<stdio.h>

int tes03()
{
	int hour1, minute1;
	int hour2, minute2;

	printf("��ֱ�����t1ʱ�̺�t2ʱ�̣���������\"5 7\"��ʾ 5ʱ 7��");

	scanf_s("%d %d", &hour1, &minute1);
	scanf_s("%d %d", &hour2, &minute2);
	
	int t1 = hour1 * 60 + minute1; 
	int t2 = hour2 * 60 + minute2;

	int t = t2 - t1;

	printf("ʱ���΢%dʱ%d��", t / 60, t % 60);

	return 0;
}
#include<stdio.h>

int test04() {

	int bjt,utc;

	printf("请输入代表北京时间BJT的整数时分：...\n");
	scanf_s("%d", &bjt);

	int hour = bjt / 100;
	int minute = bjt % 100;

	if (hour >= 8) {

		utc = (hour - 8) * 100 + minute;
	}

	else
		{ utc = (hour + 16) * 100 + minute; }
	

	printf("转换后的世界时间UTC为：%d \n", utc);

	return 0;
}
#include<stdio.h>

int test04() {

	int bjt,utc;

	printf("�����������ʱ��BJT������ʱ�֣�...\n");
	scanf_s("%d", &bjt);

	int hour = bjt / 100;
	int minute = bjt % 100;

	if (hour >= 8) {

		utc = (hour - 8) * 100 + minute;
	}

	else
		{ utc = (hour + 16) * 100 + minute; }
	

	printf("ת���������ʱ��UTCΪ��%d \n", utc);

	return 0;
}
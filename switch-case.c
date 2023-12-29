#include<stdio.h>

int test02(){

	
	int type;
	scanf_s("%d", &type);

	switch (type) {

	case 1:
		printf("你好");
		break;
	case 2:
		printf("早上好");
		break;
	case 3:
		printf("中午好");
		break;
	case 4:
		printf("晚上好");
		break;
	default:
		printf("再见");
		break;
	}

	return 0;

}
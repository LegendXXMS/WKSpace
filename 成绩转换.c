#include<stdio.h>

int test03() {

	int score;
	printf("请输入你的成绩：...\n");

	scanf_s("%d", &score);

	printf("你输入的成绩是：%d", score);

	switch(score / 10) {
		case 10:
		case 9:
			printf("您的成绩为A");
			break;
		case 8:
			printf("您的成绩为B");
			break;
		case 7:
			printf("您的成绩为C");
			break;
		case 6:
			printf("您的成绩为D");
			break;
		default:
			printf("您的成绩为E");
			break;
	
	}

	return 0;
}
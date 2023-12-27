#include<stdio.h>

int test01() {

	//初始化

	int price = 0;
	int bill = 0;


	//输入
	printf("请输入金额...（元）\n");
	scanf_s("%d", &price);
	printf("请输入票面...（元）\n");
	scanf_s("%d", &bill);


	//计算找零
	if (bill > price) {

		printf("应该找您：%d 元, 欢迎下次光临！\n", bill - price);
	}
	else {
		printf("您的钱不够...\n");
	}

	return 0;
}
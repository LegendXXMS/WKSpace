#include<stdio.h>

int test0() {


	int n;
	int fact = 1;

	printf("请输入数字\n");
	scanf_s("%d", &n);

	
	/*
	* 1乘到n
	for (int i = 2; i <= n; i++) {

		fact *= i;
	}*/

	//n乘到1
	int i = n;
	for (; n > 1; n--) {
		fact *= n;

	}
	printf("%d的阶乘结果为：%d", i,fact);

	return 0;
}
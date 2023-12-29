
//f(n) = 1 - 1/2 + 1/3 - 1/4 +....+1/n

#include<stdio.h>

int test05() {

	int n, i;
	double sum = 0.0;
	double sign = -1;

	scanf_s("%d", &n);

	for (i = 1; i <= n; i++) {

		sum += sign/ i;  //需要取1.0进行浮点数除法。否则整数相除小数部分会被截断成整数
		sign = -sign;
	}

	printf("前%d项求和结果为%f\n", n, sum);

	return 0;
}
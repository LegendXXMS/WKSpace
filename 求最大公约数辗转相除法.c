/*
* 
辗转相除法
如果b等于0，计算结束，a就是最大公约数；
否则计算a除以b的余数，让a等于b，而b等于那个余数；
回到第一步。

a   b   t
12  18  12
18  12  6
12  6   0
6   0              ------>最大公约数为6
*/
#include<stdio.h>

int test08() {

	int a, b;
	int t;
	scanf_s("%d %d", &a, &b);

	while (b != 0) {
		t = a % b;
		a = b;
		b = t;
	}

	printf("最大公约数为：%d", a);

	return 0;
}
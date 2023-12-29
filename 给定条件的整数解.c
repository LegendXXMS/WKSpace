


/*
求符合给定条件整数集
给定不超过6的正整数A，考虑从A开始的连续四个数字。请输出所有由他们组成的无重复数字的三位数。
要求从小到大，每行六个整数，整数间以空格分隔，行末不能有多余空格。

*/
#include<stdio.h>

int test07() {

	int a;
	scanf_s("%d", &a);

	int i, j, k;
	int count = 0;

	for (i = a; i <= a + 3; i++) {
		for (j = a; j <= a + 3; j++) {
			for (k = a; k <= a + 3; k++) {
				if (i != j && j != k && i != k) {
					printf("%d%d%d", i, j, k);
					count++;
					if (count % 6 == 0) {
						printf("\n");
					}
					else {
						printf(" ");
					}
				}
			}
		}

	}
	return 0;
}
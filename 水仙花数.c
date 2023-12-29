/*
水仙花数
水仙花数是指一个N位正整数（N >= 3）,他的每个位上的数字的N次幂之和等于它本身。 153 = 1^3 + 5^3 + 3^3
要求编写程序计算所有N位的水仙花数。

*/


#include<stdio.h>


int test08() {

	int n;
	int i;
	
	int first = 1;

	scanf_s("%d", &n);

	for (i = 1; i < n; i++) {
		first *= 10;                     //计算开始位置
	}

	for (i = first; i < first * 10; i++) {
		int t = i;
		int sum = 0;
		do {
			
			int d = t % 10;
			t /= 10;
			int p = 1;
			int j = 0;
			while (j < n) {
				p *= d;
				j++;
			}
			sum += p;
		} while (t > 0);

		if (sum == i) {
			printf("%d\n", i);
		}
	}
	return 0;
}
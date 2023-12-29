//s输入两个正整数M和N（1<=M<=N<=500）  
//顺序输出M和N区间内素数的个数以及他们的和

#include<stdio.h>

int test10() {

	int m, n;
	int sum = 0;

	scanf_s("%d %d", &m, &n);
	if (m == 1)
		m = 2;          //对特殊情况梳理

	int count = 0;          //素数统计

	for (int i = m; i <= n; i++) {
		int isPrime = 1;
		for (int j = 2; j < i ; j++) {
			if (i % j == 0) {
				isPrime = 0;           //不是素数
				break;
			}
		}
			if (isPrime) {            
				count++;          
				sum += i;
			}
		
	}

	printf("%d %d", count, sum);

	return 0;
}
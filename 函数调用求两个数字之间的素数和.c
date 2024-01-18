#include<stdio.h>


int isPrime(int i) {                  
	int ret = 1;
	for (int k = 2; k <= i / 2; k++) {
		if (i % k == 0) {
			ret = 0;
			break;
		}

	}
	return ret;
}




int test01() {
	int m, n;
	int sum = 0;
	int cnt = 0;

	scanf_s("%d %d", &m, &n);

	for (int i = m; i <= n; i++) {
		if (isPrime(i)) {
			sum += i;
			cnt++;
		}
	}

	printf("%d %d", cnt, sum);

	return 0;
}
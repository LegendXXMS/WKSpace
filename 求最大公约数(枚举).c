#include<stdio.h>
#include<stdlib.h>

int test07() {

	int a, b;

	scanf_s("%d %d", &a, &b);


	int ret = 0;
	int i;
	
	for (i = 1; i <= min(a,b); i++) {
		if (a % i == 0 && b % i == 0) {
			ret = i;
		}
	}

	printf("%d��%d�����Լ����%d\n", a, b, ret);

	return 0;
}
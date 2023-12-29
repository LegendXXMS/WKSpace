#include<stdio.h>

int test01() {

	int x;
	int n = 0;
	scanf_s("%d", &x);
	

	do {
		x /= 10;
		n++;
		printf("x = %d,n = %d\n", x, n);
	} while (x > 0);

	printf("Î»ÊıÎª£º%d", n);


	return 0;
}
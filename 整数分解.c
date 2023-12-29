#include<stdio.h>

int test04() {

	int x = 123456;
	int digit;
	int opt = 0;


	//ÄæÐòÊä³ö
	while (x > 0) {
		digit = x % 10;
		opt = 10 * opt + digit;
		printf("x=%d,digit=%d,opt=%d\n", x, digit, opt);
		x /= 10;
	}

	printf("%d", opt);


	return 0;
}
#include<stdio.h>


int test06() {

	int x;
	int mask = 1;
	
	scanf_s("%d", &x);

	int t = x;

	while (t > 9) {
		t /= 10;
		mask *= 10;
	}                                    
	
	do {
		int d = x / mask;
		printf("%d", d);
		if (mask > 9)
		{
			printf(" ");
		}
		x %= mask;
		mask /= 10;
	} while (mask > 0);

	return 0;
}
#include<stdio.h>

int test09() {

	int n;
	scanf_s("%d", &n);

	int i, j;

	for (i = 1; i <= n; i++) {
		for (j = 1; j <= i; j++) {
			printf("%d*%d=%d", j, i, i * j);

			if (i * j < 10) {
				printf("   ");
			}
			else {
				printf("  ");
			}
		}
		printf("\n");
	}

	return 0;
}
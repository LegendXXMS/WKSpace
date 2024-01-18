#include<stdio.h>


void sum(int begin, int end) {
	int i;
	int sum = 0;

	for (i = begin; i <= end; i++) {
		sum += i;
	}

	printf("得到的结果为%d\n", sum);
}



int test02() {
	
	int begin, end;

	printf("求和起点为: \n");
	scanf_s("%d", &begin);
	printf("求和终点为: \n");
	scanf_s("%d", &end);

	sum(begin, end);

	return 0;
}
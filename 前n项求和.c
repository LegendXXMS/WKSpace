
//f(n) = 1 - 1/2 + 1/3 - 1/4 +....+1/n

#include<stdio.h>

int test05() {

	int n, i;
	double sum = 0.0;
	double sign = -1;

	scanf_s("%d", &n);

	for (i = 1; i <= n; i++) {

		sum += sign/ i;  //��Ҫȡ1.0���и����������������������С�����ֻᱻ�ضϳ�����
		sign = -sign;
	}

	printf("ǰ%d����ͽ��Ϊ%f\n", n, sum);

	return 0;
}
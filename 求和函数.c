#include<stdio.h>


void sum(int begin, int end) {
	int i;
	int sum = 0;

	for (i = begin; i <= end; i++) {
		sum += i;
	}

	printf("�õ��Ľ��Ϊ%d\n", sum);
}



int test02() {
	
	int begin, end;

	printf("������Ϊ: \n");
	scanf_s("%d", &begin);
	printf("����յ�Ϊ: \n");
	scanf_s("%d", &end);

	sum(begin, end);

	return 0;
}
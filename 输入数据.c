#include<stdio.h>
#include<stdlib.h>


int test04(void) {

	int number;
	int* a;
	int i;


	printf("请输入数量：");
	scanf_s("%d", &number);

	a = (int*)malloc(number * sizeof(int));           //申请空间

	for (i = 0; i < number; i++) {
		scanf_s("%d", &a[i]);
	}

	for (i = number - 1; i >= 0; i--) {
		printf("%d ", a[i]);
	}

	free(a);                                            //返还空间


	return 0;
}
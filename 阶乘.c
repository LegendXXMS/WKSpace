#include<stdio.h>

int test0() {


	int n;
	int fact = 1;

	printf("����������\n");
	scanf_s("%d", &n);

	
	/*
	* 1�˵�n
	for (int i = 2; i <= n; i++) {

		fact *= i;
	}*/

	//n�˵�1
	int i = n;
	for (; n > 1; n--) {
		fact *= n;

	}
	printf("%d�Ľ׳˽��Ϊ��%d", i,fact);

	return 0;
}
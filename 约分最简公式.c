#include<stdio.h>

int test09() {


	int a, b;
	scanf_s("%d/%d", &a, &b);     //����

	int mole = a;
	int deno = b;
	
	while (deno != 0) {        //շת�����
		int t;
		t = mole % deno;
		mole = deno;
		deno = t;
	}                     //������Լ��

	printf("%d/%d", a/mole , b/mole);


	return 0;
}
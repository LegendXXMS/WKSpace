#include<stdio.h>

int test09() {


	int a, b;
	scanf_s("%d/%d", &a, &b);     //输入

	int mole = a;
	int deno = b;
	
	while (deno != 0) {        //辗转相除法
		int t;
		t = mole % deno;
		mole = deno;
		deno = t;
	}                     //算出最大公约数

	printf("%d/%d", a/mole , b/mole);


	return 0;
}
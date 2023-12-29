//计算序列2/1 + 3/2 + 5/3 + 8/5 +....的前n项之和

#include<stdio.h>


int main() {

	int n;
	scanf_s("%d", &n);   

	double mole = 2, deno = 1;;         //mole分子，deno分母
	double sum = 0;
	

	for (int i = 1; i <= n; i++) {
		double j = deno;                       
		sum += mole / deno;
		deno = mole;
		mole += j;
	}

	printf("%.2f", sum);

	return 0;
}
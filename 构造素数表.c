#include<stdio.h>
#define maxNumber 25

int test04() {

	int isPrime[maxNumber] = {2};
	int i;
	int x;

	for (i = 0; i < maxNumber; i++) {
		isPrime[i] = 1;                                 //初始化标记
	}

	for (x = 2; x < maxNumber; x++) {
		if (isPrime[x]) {
			for (i = 2; i * x < maxNumber; i++) {
				isPrime[i * x] = 0;                             //素数乘i肯定不是素数，标记为0
			}
		}
	}
	
	for (i = 2; i < maxNumber; i++) {
		if (isPrime[i]) {
			printf("%d ", i);                                        //素数为1，输出
		}
		}

	return 0;
	}





	
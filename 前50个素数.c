

#include<stdio.h>
int test03() {

	int x =2 ;        //素数判断起点
	int isPrime;     //判断素数1/0
	int count = 0;  //素数计数

	while(count < 50)
	{
		isPrime = 1;
		for (int i = 2; i < x; i++) {
			
			if (x % i == 0) {
				isPrime = 0;
				break;
				//break是满足条件了就跳出循环，continue是满足条件结束当前循环进入下一轮循环
			}
		}

		if (isPrime) {
			printf("%d ", x);
			count++;                  //获得素数加1
		}
		x++;                          
	}
	printf("\n");

	return 0;
}
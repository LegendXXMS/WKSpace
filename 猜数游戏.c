#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int test02() {
		
	srand(time(0));
	int a = rand() % 100 + 1;

	int b;
	int count = 0;

	printf("我已经想好了一个一到一百的数字...\n");

	do {
		printf("请输入你要猜的数字：\n");
		scanf_s("%d", &b);
		count ++;

		if (a > b) {
			printf("你猜的数字小了！\n");
		}
		else if(a < b){
			printf("你猜的数字大了！\n");
		}

	} while (a != b);
		
	printf("你猜中了!答案是%d,你猜的次数为%d\n", a, count);


	return 0;
}
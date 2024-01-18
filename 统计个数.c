//输入数量不确定的[0,9]范围内的整数，统计每一种数字出现的次数，输入-1表示结束


#include<stdio.h>
#define number 10

int test02() {

	
	int x;
	int i;
	int count[number];
	
	for (i = 0; i < number; i++) {
		count[i] = 0;                     //初始化数组
	}

	scanf_s("%d", &x);

	while (x != -1) {

		if (x >= 0 && x <= 9) {
			count[x]++;                              //数组参与运算
		}

		scanf_s("%d", &x);
	}
	for ( i = 0; i < number; i++) { 
		printf("%d:%d\n",i,count[i]);                 //遍历数组输出
	}

	return 0;
}
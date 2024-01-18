//计算用户输入的数字平均数，并输出所有大于平均数的数

#include<stdio.h>


int test01() {


	int x;
	int cnt = 0; 
	double sum = 0;             
	int number[100];
	
	scanf_s("%d", &x);
	
	while (x != -1) {
		number[cnt] = x;
		sum += x;
		cnt++;
		scanf_s("%d", &x);
	}

	if (cnt > 0) {
		double average = sum / cnt;
		printf("%f\n", average);

		int i;
		for (i = 0; i < cnt; i++) {
			if (number[i] > average) {
				printf("%d ", number[i]);
			}
		}
	}



	return 0;
}
#include<stdio.h>

void choose(int n) {
	int i;
	printf("第一列同学的编号为：");
	
	for(i = 1; i <= n; i++) {
	
		if (i % 2 == 1) {
			if (i == n || i == n - 1) {
				printf("%d", i);
			}
			else{
				printf("%d ", i);
			}
		}
	}
}

int main() {
	
	int n;
	printf("请输入班级人数：...\n");
	scanf_s("%d", &n);
	choose(n);
	return 0;
}


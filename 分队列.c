#include<stdio.h>

void choose(int n) {
	int i;
	printf("��һ��ͬѧ�ı��Ϊ��");
	
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
	printf("������༶������...\n");
	scanf_s("%d", &n);
	choose(n);
	return 0;
}


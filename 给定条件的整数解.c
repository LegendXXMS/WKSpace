


/*
����ϸ�������������
����������6��������A�����Ǵ�A��ʼ�������ĸ����֡������������������ɵ����ظ����ֵ���λ����
Ҫ���С����ÿ�������������������Կո�ָ�����ĩ�����ж���ո�

*/
#include<stdio.h>

int test07() {

	int a;
	scanf_s("%d", &a);

	int i, j, k;
	int count = 0;

	for (i = a; i <= a + 3; i++) {
		for (j = a; j <= a + 3; j++) {
			for (k = a; k <= a + 3; k++) {
				if (i != j && j != k && i != k) {
					printf("%d%d%d", i, j, k);
					count++;
					if (count % 6 == 0) {
						printf("\n");
					}
					else {
						printf(" ");
					}
				}
			}
		}

	}
	return 0;
}
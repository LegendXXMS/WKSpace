//s��������������M��N��1<=M<=N<=500��  
//˳�����M��N�����������ĸ����Լ����ǵĺ�

#include<stdio.h>

int test10() {

	int m, n;
	int sum = 0;

	scanf_s("%d %d", &m, &n);
	if (m == 1)
		m = 2;          //�������������

	int count = 0;          //����ͳ��

	for (int i = m; i <= n; i++) {
		int isPrime = 1;
		for (int j = 2; j < i ; j++) {
			if (i % j == 0) {
				isPrime = 0;           //��������
				break;
			}
		}
			if (isPrime) {            
				count++;          
				sum += i;
			}
		
	}

	printf("%d %d", count, sum);

	return 0;
}
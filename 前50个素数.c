

#include<stdio.h>
int test03() {

	int x =2 ;        //�����ж����
	int isPrime;     //�ж�����1/0
	int count = 0;  //��������

	while(count < 50)
	{
		isPrime = 1;
		for (int i = 2; i < x; i++) {
			
			if (x % i == 0) {
				isPrime = 0;
				break;
				//break�����������˾�����ѭ����continue����������������ǰѭ��������һ��ѭ��
			}
		}

		if (isPrime) {
			printf("%d ", x);
			count++;                  //���������1
		}
		x++;                          
	}
	printf("\n");

	return 0;
}
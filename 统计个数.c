//����������ȷ����[0,9]��Χ�ڵ�������ͳ��ÿһ�����ֳ��ֵĴ���������-1��ʾ����


#include<stdio.h>
#define number 10

int test02() {

	
	int x;
	int i;
	int count[number];
	
	for (i = 0; i < number; i++) {
		count[i] = 0;                     //��ʼ������
	}

	scanf_s("%d", &x);

	while (x != -1) {

		if (x >= 0 && x <= 9) {
			count[x]++;                              //�����������
		}

		scanf_s("%d", &x);
	}
	for ( i = 0; i < number; i++) { 
		printf("%d:%d\n",i,count[i]);                 //�����������
	}

	return 0;
}
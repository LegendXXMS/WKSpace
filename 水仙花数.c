/*
ˮ�ɻ���
ˮ�ɻ�����ָһ��Nλ��������N >= 3��,����ÿ��λ�ϵ����ֵ�N����֮�͵��������� 153 = 1^3 + 5^3 + 3^3
Ҫ���д�����������Nλ��ˮ�ɻ�����

*/


#include<stdio.h>


int test08() {

	int n;
	int i;
	
	int first = 1;

	scanf_s("%d", &n);

	for (i = 1; i < n; i++) {
		first *= 10;                     //���㿪ʼλ��
	}

	for (i = first; i < first * 10; i++) {
		int t = i;
		int sum = 0;
		do {
			
			int d = t % 10;
			t /= 10;
			int p = 1;
			int j = 0;
			while (j < n) {
				p *= d;
				j++;
			}
			sum += p;
		} while (t > 0);

		if (sum == i) {
			printf("%d\n", i);
		}
	}
	return 0;
}
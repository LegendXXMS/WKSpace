#include<stdio.h>

int test04() {

	int one, two, five;
	int x;
	//int exit = 0;  ����break
	scanf_s("%d", &x);
	for (one = 0; one < x * 10; one++) {
		for (two = 0; two < x * 10 / 2; two++) {
			for (five = 0; five < x * 10 / 2; five++) {
				if (one + two * 2 + five * 5 == x * 10) {
					printf("�������%d��һ�ǣ�%d�����ǣ�%d��������ճ� %dԪ��\n", one, two, five, x);
					//exit = 1;����break
					goto out; //goto put; out: ����
				}
			}
			//if (exit)break;����break
		}
		//if (exit)break;����break
	}

out:
	return 0;
}
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int test02() {
		
	srand(time(0));
	int a = rand() % 100 + 1;

	int b;
	int count = 0;

	printf("���Ѿ������һ��һ��һ�ٵ�����...\n");

	do {
		printf("��������Ҫ�µ����֣�\n");
		scanf_s("%d", &b);
		count ++;

		if (a > b) {
			printf("��µ�����С�ˣ�\n");
		}
		else if(a < b){
			printf("��µ����ִ��ˣ�\n");
		}

	} while (a != b);
		
	printf("�������!����%d,��µĴ���Ϊ%d\n", a, count);


	return 0;
}
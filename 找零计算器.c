#include<stdio.h>

int test01() {

	//��ʼ��

	int price = 0;
	int bill = 0;


	//����
	printf("��������...��Ԫ��\n");
	scanf_s("%d", &price);
	printf("������Ʊ��...��Ԫ��\n");
	scanf_s("%d", &bill);


	//��������
	if (bill > price) {

		printf("Ӧ��������%d Ԫ, ��ӭ�´ι��٣�\n", bill - price);
	}
	else {
		printf("����Ǯ����...\n");
	}

	return 0;
}
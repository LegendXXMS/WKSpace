#include<stdio.h>

int test02(){

	
	int type;
	scanf_s("%d", &type);

	switch (type) {

	case 1:
		printf("���");
		break;
	case 2:
		printf("���Ϻ�");
		break;
	case 3:
		printf("�����");
		break;
	case 4:
		printf("���Ϻ�");
		break;
	default:
		printf("�ټ�");
		break;
	}

	return 0;

}
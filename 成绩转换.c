#include<stdio.h>

int test03() {

	int score;
	printf("��������ĳɼ���...\n");

	scanf_s("%d", &score);

	printf("������ĳɼ��ǣ�%d", score);

	switch(score / 10) {
		case 10:
		case 9:
			printf("���ĳɼ�ΪA");
			break;
		case 8:
			printf("���ĳɼ�ΪB");
			break;
		case 7:
			printf("���ĳɼ�ΪC");
			break;
		case 6:
			printf("���ĳɼ�ΪD");
			break;
		default:
			printf("���ĳɼ�ΪE");
			break;
	
	}

	return 0;
}
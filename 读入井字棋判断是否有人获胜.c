//��ά�������
//for (i = 0; i < 3; i++) {
//	for (j = 0; i < 5; i++) {
//		a[i][j] = i * j;
//	}
//}
//�Զ�ά���鶨���ʱ���������붨��a[][...]


//���뾮�����ж��Ƿ����˻�ʤ

#include<stdio.h>
#define size 3

int main(){

	int board[size][size];
	int i, j;

	int numOfX;
	int numOfO;

	//-1ƽ��  1��XӮ  0��OӮ
	int result = -1;   


	//����
	for (i = 0; i < size; i++) {
		for (j = 0; j < size; j++) {
			scanf_s("%d", &board[i][j]);              
		}
	}

	
	//�����

	for (i = 0; i < size && result == -1;i ++) {
		numOfX = numOfO = 0;
		for (j = 0; j < size; j++) {
			if (board[i][j] == 1) {
				numOfX++;
			}
			else {
				numOfO++;
			}
		}
		if (numOfO == size) {
			result = 0;
		}
		else {
			result = 1;
		}
	}


	//�����
	if (result == -1){
		for (i = 0; i < size && result == -1; i++) {
			numOfX = numOfO = 0;
			for (j = 0; j < size; j++) {
				if (board[i][j] == 1) {
					numOfX++;
				}
				else {
					numOfO++;
				}
			}
			if (numOfO == size) {
				result = 0;
			}
			else {
				result = 1;
			}
		}
	}

	//������Խ���
	numOfO = numOfX = 0;
	for (i = 0; i < size; i++) {
		if (board[i][i] == 1) {
			numOfX++;
		}
		else {
			numOfO++;
		}
	}
	if (numOfO == size) {
		result = 0;
	}
	else {
		result = 1;
	}


	//��鷴�Խ���

	numOfO = numOfX = 0;
	for (i = 0; i < size; i++) {
		if (board[i][size - i - 1] == 1) {
			numOfX++;
		}
		else{
			numOfO++;
	}
	}
	if (numOfO == size) {
		result = 0;
	}
	else {
		result = 1;
	}


	if (result == -1) {
		printf("ƽ�֣�\n");
	}
	else if(result == 1) {
		printf("X��ʤ��\n");
	}
	else {
		printf("O��ʤ��\n");
	}

	return 0;
}
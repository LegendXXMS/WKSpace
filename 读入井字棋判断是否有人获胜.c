//二维数组遍历
//for (i = 0; i < 3; i++) {
//	for (j = 0; i < 5; i++) {
//		a[i][j] = i * j;
//	}
//}
//对二维数组定义的时候，列数必须定义a[][...]


//读入井字棋判断是否有人获胜

#include<stdio.h>
#define size 3

int main(){

	int board[size][size];
	int i, j;

	int numOfX;
	int numOfO;

	//-1平局  1：X赢  0：O赢
	int result = -1;   


	//读入
	for (i = 0; i < size; i++) {
		for (j = 0; j < size; j++) {
			scanf_s("%d", &board[i][j]);              
		}
	}

	
	//检查行

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


	//检查列
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

	//检查正对角线
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


	//检查反对角线

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
		printf("平局！\n");
	}
	else if(result == 1) {
		printf("X获胜！\n");
	}
	else {
		printf("O获胜！\n");
	}

	return 0;
}
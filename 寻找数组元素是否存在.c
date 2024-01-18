//sizeof(a)/sizeof(a[0]) 为数组的大小

//for (i = 0; i < legenth; i++) {
//	b[i] = a[i];
// }                                //把一个数组所有元素交给另一个数组需要采用遍历



#include<stdio.h>




int search(int key, int a[], int length)   //key为要寻找的数字，a[]为要寻找的数组，length为数组a的长度
{
	int ret = -1;                                       //没有找到则输出-1
	int i;
	for (i = 0; i < length; i++) {
		if (a[i] == key) {
			ret = i;                                          //找到了记录位置
			break;
		}
	}
	return ret;
}


int test03() {



	int a[] = { 1,2,34,5,6,7,23,456,123,452,9, };
	int x;
	int loc;
	printf("请输入一个数字：\n");
	scanf_s("%d", &x);

	loc = search(x, a, sizeof(a) / sizeof(a[0]));
	if (loc != -1) {
		printf("%d在第%d个位置上\n", x, loc);
	}
	else {
		printf("%d不存在\n", x);
	}

	return 0;
}
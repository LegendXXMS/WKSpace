//sizeof(a)/sizeof(a[0]) Ϊ����Ĵ�С

//for (i = 0; i < legenth; i++) {
//	b[i] = a[i];
// }                                //��һ����������Ԫ�ؽ�����һ��������Ҫ���ñ���



#include<stdio.h>




int search(int key, int a[], int length)   //keyΪҪѰ�ҵ����֣�a[]ΪҪѰ�ҵ����飬lengthΪ����a�ĳ���
{
	int ret = -1;                                       //û���ҵ������-1
	int i;
	for (i = 0; i < length; i++) {
		if (a[i] == key) {
			ret = i;                                          //�ҵ��˼�¼λ��
			break;
		}
	}
	return ret;
}


int test03() {



	int a[] = { 1,2,34,5,6,7,23,456,123,452,9, };
	int x;
	int loc;
	printf("������һ�����֣�\n");
	scanf_s("%d", &x);

	loc = search(x, a, sizeof(a) / sizeof(a[0]));
	if (loc != -1) {
		printf("%d�ڵ�%d��λ����\n", x, loc);
	}
	else {
		printf("%d������\n", x);
	}

	return 0;
}
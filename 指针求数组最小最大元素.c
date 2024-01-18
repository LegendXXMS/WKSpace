#include<stdio.h>


void minmax(int a[], int len, int *max, int *min);


int test01() {

	int a[] = { 1,2,3,4,5,6,11,22,123,45,114,213,1233,13, };

	int min, max;
	
	minmax(a, sizeof(a) / sizeof(a[0]), &max, &min);


	printf("min = %d,max = %d\n", min, max);

	

	return 0;
}



void minmax(int a[], int len, int *max, int *min) {

	int i;
	*min = *max = a[0];

	for (i = 0; i < len; i++) {
		if (a[i] < *min) {
			*min = a[i];
		}
		if (a[i] > *max) {
			*max = a[i];
		}
	}


}



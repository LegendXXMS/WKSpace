//a + aa + aaa +...+aaa(n��a)��a��0��9����n��1��8��

#include<stdio.h>

int main() {

	int a, n;
	scanf_s("%d %d", &a, &n);

	int sum = 0;
	int t = 0;
	for (int i = 1; i <= n; i++) {

		t = t * 10 + 2;
		sum += t;
	}

	printf("%d", sum);

	return 0;
}
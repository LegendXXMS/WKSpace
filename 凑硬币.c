#include<stdio.h>

int test04() {

	int one, two, five;
	int x;
	//int exit = 0;  接力break
	scanf_s("%d", &x);
	for (one = 0; one < x * 10; one++) {
		for (two = 0; two < x * 10 / 2; two++) {
			for (five = 0; five < x * 10 / 2; five++) {
				if (one + two * 2 + five * 5 == x * 10) {
					printf("你可以用%d张一角，%d张两角，%d张五角来凑出 %d元！\n", one, two, five, x);
					//exit = 1;接力break
					goto out; //goto put; out: 跳出
				}
			}
			//if (exit)break;接力break
		}
		//if (exit)break;接力break
	}

out:
	return 0;
}
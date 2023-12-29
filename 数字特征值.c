/*
* 对数字求特征值是常用的编码算法，奇偶特征是一种简单的特征值。对于一个整数,
从个位开始对每一位数字编号，个位是1号，十位是2号，以此类推。这个整数在第n位上的数字记作x，
如果x和n的奇偶性相同，则记下一个1，否则记下一个0。
按照整数的顺序把对应位的表示奇偶性的0和1都记录下来，就形成了一个二进制数字。
比如，对于342315，这个二进制数字就是001101。

这里的计算可以用下面的表格来表示：

数字
3
4
2
3
1
5

数位
6
5
4
3
2
1

数字奇偶
奇
偶
偶
奇
奇
奇

数位奇偶
偶
奇
偶
奇
偶
奇

奇偶一致
0
0
1
1
0
1
你的程序要读入一个非负整数，整数的范围是[0,1000000]，
然后按照上述算法计算出表示奇偶性的那个二进制数字，
输出它对应的十进制值。

提示：将整数从右向左分解，数位每次加1，而二进制值每次乘2。

输入格式:

一个非负整数，整数的范围是[0,1000000]。

输出格式：

一个整数，表示计算结果。

输入样例：

342315
001101

输出样例：

13
*/



//342315 -----> 001101    1*1+1*4+1*8 = 13


#include<stdio.h>

int test06() {


	int digit = 1;     //二进制数位值
	int position = 1;  //奇数偶数检验
	int binary = 0;       //值
	int ipt;           //输入数字

	printf("请输入数字： \n");
	scanf_s("%d", &ipt);

	while (ipt > 0) {
		int x = ipt % 10;        //从右往左取数

		//x和digit奇偶性一致则参与运算
		if (x % 2 == position % 2) {
			binary += digit;
		}

		digit *= 2;      //二进制值进位 1 2 4 ....
		ipt /= 10;      //从右往左依次去掉
		position++;   //奇偶转换
	}

	printf("输入的数字值为：%d\n", binary);

	return 0;
}
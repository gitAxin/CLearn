#define _CRT_SECURE_NO_DEPRECATE 1

#include <stdio.h>
//求两个数的最大公约数
//辗转相除法
int main() {

	int num1 = 24;
	int num2 = 18;
	printf("输入两个数->:");
	scanf("%d%d", &num1, &num2);
	int r = 0;
	while (num1 % num2) {

		r = num1 % num2;
		num1 = num2;
		num2 = r;
	}
	printf("最大公约数为：%d\n", r);



	return 0;
}
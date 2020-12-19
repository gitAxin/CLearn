#define _CRT_SECURE_NO_DEPRECATE 1

#include <stdio.h>
//闰年
int main() {

	/*
	* 闰年的条件：
	* 1.被4整除并且不能被100整除
	* 2.被400整除
	*/
	int year = 0;
	int count = 0;
	for (year = 1000; year <= 2000; year++) {
		if (year % 4 == 0 && year % 100 != 0) {
			printf("%d ", year);
			count++;
		}
		else if (year % 400 == 0) {
			printf("%d ", year);
			count++;
		}

	}
	printf("\n共有%d个闰年", count);



	return 0;
}
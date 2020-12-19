#include <stdio.h>
#include <math.h>
//100-200之间素数

//有关教程：《素数求解的N种境界》https://blog.csdn.net/qq_41809901/article/details/100105117
int main() {
	//方法1
	SuShu();
	//方法2
	SuShuPlus();
	//方法3
	SuShuPlus2();
}

int SuShu() {
	int i = 0;
	int count = 0;
	for (i = 100; i <= 200; i++) {

		//素数判断的规则：
		//1.试除法：素数只能被1和他本身整除
		//产生2->i-1的素数
		int j = 0;
		int flag = 1;
		for (j = 2; j < i; j++) {
			if (i % j == 0) {
				flag = 0;
				break;
			}
		}
		if (flag) {
			count++;
			printf("%d ", i);
		}


	}
	printf("\ncount = %d\n", count);
	return 0;
}

//优化
int SuShuPlus() {
	int i = 0;
	int count = 0;
	for (i = 100; i <= 200; i++) {

		//素数判断的规则：
		//1.试除法：素数只能被1和他本身整除
		//产生2->i-1的素数
		int j = 0;
		int flag = 1;
		for (j = 2; j <= sqrt(i); j++) { //也可以取 i / 2;
			if (i % j == 0) {
				flag = 0;
				break;
			}
		}
		if (flag) {
			count++;
			printf("%d ", i);
		}


	}
	printf("\ncount = %d\n", count);
	return 0;
}

//优化
int SuShuPlus2() {
	int i = 0;
	int count = 0;
	//偶数肯定不是素数，所以我们只需要在奇数中查找
	for (i = 101; i <= 200; i+=2) {

		//素数判断的规则：
		//1.试除法：素数只能被1和他本身整除
		//产生2->i-1的素数
		int j = 0;
		int flag = 1;
		for (j = 2; j <= sqrt(i); j++) { //也可以取 i / 2;
			if (i % j == 0) {
				flag = 0;
				break;
			}
		}
		if (flag) {
			count++;
			printf("%d ", i);
		}


	}
	printf("\ncount = %d\n", count);
	return 0;
}
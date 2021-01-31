#define _CRT_SECURE_NO_DEPRECATE 1





#include <stdio.h>
#include <string.h>
#include <assert.h>
#include <math.h>

/*
*求和 0-100000之间的所有水仙花数并输出
水仙花数:一个N位数，它的每位数N次方之和等于它本身
		如:153 = 1^3 + 5^3 + 3^3
		则 153是一个水仙花数
*/

int main() {
	int i = 0;
	for (i = 0; i <= 100000; i++) {
		//判断i是否为水仙花数(自幂数)
		//1.计算i的位数 n位数
		int n = 1;
		int tmp = i;
		int sum = 0;
		while (tmp / 10) {
			tmp = tmp / 10;
			n++;
		}
		

		//2.计算i的每一位的n次方之和 sum
		tmp = i;
		while (tmp) {
			sum += (int)pow(tmp % 10, n);
			tmp = tmp / 10;
		}


		//3. 比较 i == sum
		if (i == sum) {
			printf("%d ", i);
		}
	}
	
	return 0;
}

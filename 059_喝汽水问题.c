#define _CRT_SECURE_NO_DEPRECATE 1

#include <stdio.h>
#include <string.h>
#include <assert.h>
#include <math.h>


/*
喝汽水,1瓶汽水1元,2个空瓶可以换一瓶汽水,给20元,可以喝多少汽水
答案39瓶
*/

void fn1(money) {
	int total = 0;
	int empty = 0;
	

	if (money == 0)
		total = 0;
	else
		total = 2 * money - 1;

	total = money;
	empty = money;
	while (empty >= 2) {
		total += empty / 2;
		empty = empty / 2 + empty % 2;
	}
	printf("方法1total=%d\n", total);


}
void fn2(money) {

	int total = 0;

	if (money == 0)
		total = 0;
	else
		total = 2 * money - 1;

	
	printf("方法2total=%d\n", total);
}
int main() {
	int money = 0;
	
	scanf("%d", &money);
	//1.方法1 
	fn1(money);
	//2.方法2
	fn2(money);

	return 0;
}
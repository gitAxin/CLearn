#define _CRT_SECURE_NO_DEPRECATE 1

#include <stdio.h>
#include <string.h>
#include <assert.h>
#include <math.h>


/*
����ˮ,1ƿ��ˮ1Ԫ,2����ƿ���Ի�һƿ��ˮ,��20Ԫ,���Ժȶ�����ˮ
��39ƿ
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
	printf("����1total=%d\n", total);


}
void fn2(money) {

	int total = 0;

	if (money == 0)
		total = 0;
	else
		total = 2 * money - 1;

	
	printf("����2total=%d\n", total);
}
int main() {
	int money = 0;
	
	scanf("%d", &money);
	//1.����1 
	fn1(money);
	//2.����2
	fn2(money);

	return 0;
}
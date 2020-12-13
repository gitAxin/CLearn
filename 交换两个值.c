#include <stdio.h>
/*
* 交换两个值
*/
int main(void) {
	int a = 3;
	int b = 5;


	b = a + b;

	a = b - a;
	b = b - a;
	printf("a=%d\n", a);
	printf("b=%d\n", b);
	return 0;

}
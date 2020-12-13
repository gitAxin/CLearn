#include <stdio.h>
/*
* %d -> 打印整型
* %c -> 打印字符
* %f -> 打印浮点数字
* %p -> 以地址的形式打印
* %x -> 打印16进制数字
* %#X -> 打印16进制数字
* %o -> 打印8进制数字
* 
*/
int main(void) {
	char ch = 'a';
	printf("%c\n",ch);

	short int size = 2;
	printf("%d\n", size);

	int age = 20;
	printf("%d\n", age);
	
	long int length = 10000;
	printf("%d\n", length);
	
	//long long ll = 22222222;
	//printf("%ld\n", ll);

	float f = 3.14;
	printf("%f\n", f);

	double d = 3.1415926;
	printf("%lf\n", d);




	return 0;
}
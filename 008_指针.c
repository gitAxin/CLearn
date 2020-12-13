#include <stdio.h>


//取地址符
int main() {

	double d = 3.14;
	double* pd = &d;//指针变量
	*pd = 5.5;
	printf("%lf\n", d);
	printf("%lf\n", *pd);

	printf("%d\n", sizeof(pd));  //32位平台:4 64位平台:8


	int a = 2;
	printf("a=%d\n", a);
	printf("地址:%p\n", &a);
	int* p = &a;//p是一个变量=>指针变量
	printf("地址:%p\n", p);
	*p = 4;//解引用操作符//间接访问操作符
	printf("a=%d\n", a);
	return 0;


}
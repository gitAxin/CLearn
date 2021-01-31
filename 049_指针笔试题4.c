#define _CRT_SECURE_NO_DEPRECATE 1

#include <stdio.h>
int main() {
	int a[3][2] = { (0,1),(2,3), (4,5) };//圆括号中,是逗号表达式,结果为逗号表达式后面的数
	int* p;
	p = a[0];
	printf("%d\n", p[0]);
	//p[0] = *(p+0)

	return 0;
}
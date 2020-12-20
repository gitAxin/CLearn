#define _CRT_SECURE_NO_DEPRECATE 1
#include <stdio.h>
#include <string.h>

/*
* 库函数的调用
* 库函数文档 ：http://cplusplus.com/
*/
int main() {
	char c1[] = "hello world";
	char c2[20] = { 0 };
	printf("c1=%s, c2=%s\n", c1, c2);
	strcpy(c2, c1);//库函数strcpy的调用
	printf("c1=%s, c2=%s\n", c1, c2);


	char str1[] = "hello c language";
	printf("str1=%s\n", str1);
	memset(str1,'-',5);//库函数memset的调用
	printf("str1=%s\n", str1);
	return 0;
} 
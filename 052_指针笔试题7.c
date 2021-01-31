#define _CRT_SECURE_NO_DEPRECATE 1
#include <stdio.h>
int main() {

	/*
		补充知识:
		char* x = "abcd";
		x 存的是a的地址

	*/
	char* a[] = {"word","at","alibaba"};
	//a是一个指针数组,那么每个元素存放的都是,每个元素的首字母的地址
	char** pa = a;
	pa++;
	printf("%s\n", *pa);//at, 打印时%s,打印以a开头的字符串,直到\0
	return 0;
}

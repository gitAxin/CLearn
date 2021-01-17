#define _CRT_SECURE_NO_DEPRECATE 1
#include <stdio.h>

char* my_strcpy(char* desc, const char* src) {
	char c = 'a';
	return &c;
}

int main() {
	//1.写一个函数指针 pf, 能够指向my_strcpy
	char* (*pf)(char*,const char*) = my_strcpy;
	//2.写一个函数指针数组 pfArr, 能够存放4个my_strcpy函数的地址
	char* (*pfArr[4])(char*, const char*) = { my_strcpy ,my_strcpy ,my_strcpy ,my_strcpy };

	return 0;
}
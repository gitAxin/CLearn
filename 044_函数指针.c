#define _CRT_SECURE_NO_DEPRECATE 1
#include <stdio.h>

char* my_strcpy(char* desc, const char* src) {
	char c = 'a';
	return &c;
}

int main() {
	//1.дһ������ָ�� pf, �ܹ�ָ��my_strcpy
	char* (*pf)(char*,const char*) = my_strcpy;
	//2.дһ������ָ������ pfArr, �ܹ����4��my_strcpy�����ĵ�ַ
	char* (*pfArr[4])(char*, const char*) = { my_strcpy ,my_strcpy ,my_strcpy ,my_strcpy };

	return 0;
}
#define _CRT_SECURE_NO_DEPRECATE 1
#include <stdio.h>
int main() {

	/*
		����֪ʶ:
		char* x = "abcd";
		x �����a�ĵ�ַ

	*/
	char* a[] = {"word","at","alibaba"};
	//a��һ��ָ������,��ôÿ��Ԫ�ش�ŵĶ���,ÿ��Ԫ�ص�����ĸ�ĵ�ַ
	char** pa = a;
	pa++;
	printf("%s\n", *pa);//at, ��ӡʱ%s,��ӡ��a��ͷ���ַ���,ֱ��\0
	return 0;
}

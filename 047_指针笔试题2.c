#define _CRT_SECURE_NO_DEPRECATE 1

#include <stdio.h>
struct Test {
	int Num;
	char* pcName;
	short sDate;
	char cha[2];
	short sBa[4];
}*p;

/*
* ���� p ��ֵΪ0x100000, ���±��ʽ��ֵ�ֱ��Ƕ���?
* ��֪,�ṹ��Test���͵ı�����С��20���ֽ�
*/
int main() {
	p = (struct Test *)0x100000;
	printf("%p\n", p + 0x1);//0x00100000 + 20(0x00000014) = 0x00100014
	printf("%p\n", (unsigned long)p + 0x1);//����+1 ���Ǽ�1, ��Ϊ���ǵ�ַ,0x00100000 + 1(0x00100001) = 0x00100001
	printf("%p\n", (unsigned int*)p + 0x1);//��Ϊint*��ָ��,����Ҫ��4 0x00100000 + 4(0x00100004) = 0x00100001
	return 0;
}

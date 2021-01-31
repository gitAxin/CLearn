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
* 假设 p 的值为0x100000, 如下表达式的值分别是多少?
* 已知,结构体Test类型的变量大小是20个字节
*/
int main() {
	p = (struct Test *)0x100000;
	printf("%p\n", p + 0x1);//0x00100000 + 20(0x00000014) = 0x00100014
	printf("%p\n", (unsigned long)p + 0x1);//整型+1 就是加1, 因为不是地址,0x00100000 + 1(0x00100001) = 0x00100001
	printf("%p\n", (unsigned int*)p + 0x1);//因为int*是指针,所以要加4 0x00100000 + 4(0x00100004) = 0x00100001
	return 0;
}

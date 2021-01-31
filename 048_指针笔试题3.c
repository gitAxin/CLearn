#define _CRT_SECURE_NO_DEPRECATE 1

#include <stdio.h>
int main() {
	int a[4] = { 1,2,3,4 };
	int *ptr1 = (int*)(&a + 1);
	int* ptr2 = (int*)((int)a + 1);
	printf("%x,%x\n", ptr1[-1], *ptr2);// 4,02000000
	//ptr1[-1] = *(ptr1 + (-1)) = *(ptr1-1)


	/*
	* C语言程序指针p[-1] 表示什么意思?
	* int num[10] = {0,1,2,3,4,5,6,7,8,9};
		int *p = num+2;//此时p代表的是num[2]的地址，p[0]就是num[2]，p[-1]就是num[1]，p[-2]就是num[0];
		但是p[-3]就错了，因为你访问了一个未知的地址，会出现严重错误的。
	*/
	return 0;
}
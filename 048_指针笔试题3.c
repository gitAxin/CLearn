#define _CRT_SECURE_NO_DEPRECATE 1

#include <stdio.h>
int main() {
	int a[4] = { 1,2,3,4 };
	int *ptr1 = (int*)(&a + 1);
	int* ptr2 = (int*)((int)a + 1);
	printf("%x,%x\n", ptr1[-1], *ptr2);// 4,02000000
	//ptr1[-1] = *(ptr1 + (-1)) = *(ptr1-1)


	/*
	* C���Գ���ָ��p[-1] ��ʾʲô��˼?
	* int num[10] = {0,1,2,3,4,5,6,7,8,9};
		int *p = num+2;//��ʱp�������num[2]�ĵ�ַ��p[0]����num[2]��p[-1]����num[1]��p[-2]����num[0];
		����p[-3]�ʹ��ˣ���Ϊ�������һ��δ֪�ĵ�ַ����������ش���ġ�
	*/
	return 0;
}
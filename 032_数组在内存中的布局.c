#define _CRT_SECURE_NO_DEPRECATE 1

#include <stdio.h>
#include <string.h>

int main() {
	int arr[] = {1,2,3,4,5,6,7,8,9,10};
	int sz = sizeof(arr) / sizeof(arr[0]);
	//ÿ����ַ֮�����4��������Ϊ��������Ԫ�ض������ε�
	for (int i = 0; i < sz; i++) {
		printf("&arr[%d]=%p\n", i, &arr[i]);
	}
	return 0;
}
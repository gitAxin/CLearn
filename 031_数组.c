#define _CRT_SECURE_NO_DEPRECATE 1

#include <stdio.h>
#include <string.h>

int main() {
	//����һ������-�������10��
	int arr[10];
	char arr2[5];
	float arr3[20];
	double arr4[30];

	//��ʼ��
	int arr5[10] = {1,2,3};//����ȫ��ʼ���������±�Ϊ0
	char arr6[10] = {'a','b'};
	char arr7[10] = "ab";
	char arr8[] = "abcdef";
	printf("%d\n", sizeof(arr8));//7
	printf("%d\n", strlen(arr8));//6

	//һά����ʹ��

	printf("------------\n");
	char arr9[] = "abcdef";
	printf("%c\n", arr9[3]);
	int len = strlen(arr9);
	for (int i = 0; i < len; i++) {
		printf("%c\n", arr9[i]);
	}
	printf("------------\n");
	int arr10[] = {1,2,3,4,5,6,7,8};
	int sz = sizeof(arr10) / sizeof(arr10[0]);
	for (int i = 0; i < sz; i++) {
		printf("%d\n", arr10[i]);
	}

	return 0;
}
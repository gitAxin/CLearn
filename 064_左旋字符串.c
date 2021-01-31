#define _CRT_SECURE_NO_DEPRECATE 1

#include <stdio.h>
#include <string.h>
#include <assert.h>
#include <math.h>

/*
ʵ��һ������,���������ַ����е�K���ַ�
����:
ABCD����1���ַ��õ� BCDA (����ߵ�1���ַ��ŵ��ұ�)
ABCD����2���ַ��õ� CDAB (����ߵ�2������ŵ��ұ�)
*/

//1.������ת��
void left_move(char* arr, int k) {

	int i = 0; 
	int len = strlen(arr);

	for (i = 0; i < k; i++) {

		char tmp = *arr;
		int j = 0; 
		for(j = 0; j < len - 1; j++){
			*(arr + j) = *(arr + j + 1);
		}
		*(arr + len - 1) = tmp;
	}

}


void rever(char* left, char* right) {
	assert(left != NULL);
	assert(right != NULL);
	while (left < right)
	{
		char tmp = *left;
		*left = *right;
		*right = tmp;
		left++;
		right--;

	}
}
//2.������ת��
//ab cdef
//ba fedc
//cdefab
void left_move_plus(char* arr, int k) {
	assert(arr);
	int len = strlen(arr);
	assert(k <= len);

	//�������
	rever(arr,arr + k -1);
	//�����ұ�
	rever(arr + k, arr + len - 1);
	//������ȫ
	rever(arr, arr + len - 1);
}



/*
ʵ��һ������,�ж�һ���ַ����Ƿ�Ϊ����һ���ַ�����ת֮����ַ���
����:
	���� s1 = "AABCD" �� s2="BCDAA" ����1
	���� s1 = "abcd"  �� s2="ACBD", ����0
*/

int is_left_move(char* s1, char* s2) {
	int len = strlen(s1);
	int i = 0; 
	for (i = 0; i < len; i++) {
		left_move_plus(s1, 1);
		int ret = strcmp(s1, s2);
		if (ret == 0) {
			return 1;
		}
	}
	return 0;
}
//׷���ַ������ж��Ƿ����Ӵ��ķ���
int is_left_move_plus(char* s1, char* s2) {
	int len = strlen(s1);
	int len2 = strlen(s2);
	if (len != len2) {
		return 0;
	}
	//1.��str1�ַ�����׷��str1
	
	//strcat(s1, s1);
	strncat(s1, s1, len);
	//2.�ж�s2�Ƿ���str1���Ӵ�
	char * ret = strstr(s1, s2);
	if (ret == NULL) {
		return 0;
	}
	else {
		return 1;
	}
	
}



int main() {

	char arr[] = "abcdef";
	left_move(arr, 2);
	//left_move_plus(arr, 2);
	printf("%s\n", arr);





	char s1[] = "abcdef";
	char s2[] = "cdefab";
	//int ret = is_left_move(s1, s2);
	int ret = is_left_move_plus(s1, s2);
	if (ret) {
		printf("YES\n");
	}
	else {
		printf("NO\n");
	}
	return 0;
}
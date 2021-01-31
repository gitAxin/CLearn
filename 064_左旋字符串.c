#define _CRT_SECURE_NO_DEPRECATE 1

#include <stdio.h>
#include <string.h>
#include <assert.h>
#include <math.h>

/*
实现一个函数,可以左旋字符串中的K个字符
例如:
ABCD左旋1个字符得到 BCDA (将左边的1个字符放到右边)
ABCD左旋2个字符得到 CDAB (将左边的2个这符放到右边)
*/

//1.暴力旋转法
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
//2.三步翻转法
//ab cdef
//ba fedc
//cdefab
void left_move_plus(char* arr, int k) {
	assert(arr);
	int len = strlen(arr);
	assert(k <= len);

	//逆序左边
	rever(arr,arr + k -1);
	//逆序右边
	rever(arr + k, arr + len - 1);
	//逆序整全
	rever(arr, arr + len - 1);
}



/*
实现一个函数,判断一个字符串是否为另外一个字符串旋转之后的字符串
例如:
	给定 s1 = "AABCD" 和 s2="BCDAA" 返回1
	给定 s1 = "abcd"  和 s2="ACBD", 返回0
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
//追加字符串并判断是否是子串的方法
int is_left_move_plus(char* s1, char* s2) {
	int len = strlen(s1);
	int len2 = strlen(s2);
	if (len != len2) {
		return 0;
	}
	//1.在str1字符串中追加str1
	
	//strcat(s1, s1);
	strncat(s1, s1, len);
	//2.判断s2是否是str1的子串
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
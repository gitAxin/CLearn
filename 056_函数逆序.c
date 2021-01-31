#define _CRT_SECURE_NO_DEPRECATE 1

#include <stdio.h>

#include <string.h>
#include <assert.h>
void reverse(char* str) {

	assert(str);
	char* left = str;
	int len = strlen(str);
	char* right = str + len - 1;


	while (left < right) {
		char tmp = *left;
		*left = *right;
		*right = tmp;
		left++;
		right--;
	}
}


int main() {

	char arr[256] = { 0 };
	//scanf("%s", arr);
	gets(arr);
	reverse(arr);
	printf("ÄæÐòºóµÄ×Ö·û´®:%s", arr);
	return 0;
}

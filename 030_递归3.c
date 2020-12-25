#define _CRT_SECURE_NO_DEPRECATE 1

#include <stdio.h>
#include <string.h>

int length(char* str) {

	if (*str != '\0') {
		return 1 + length(str + 1);
	}
	return 0;
}
int main() {
	char str[] = "abc";

	//int len = strlen(str);
	int len = length(str);
	printf("len = %d\n", len);
	return 0;	
}
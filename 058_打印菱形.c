#define _CRT_SECURE_NO_DEPRECATE 1

#include <stdio.h>
#include <string.h>
#include <assert.h>
#include <math.h>


//
//	    *
//	   ***
//	  *****
//   *******
//  *********
// ***********
//*************
// ***********
//  *********
//   *******
//    *****
//     ***
//      *


int main() {
	int line = 0;
	scanf("%d", &line);//7
	//打印上半部分
	int i = 0; 
	for (i = 0; i < line; i++) {
		//打印空格
		int j = 0; 
		for (j = 0; j < line - 1 - i; j++) {
			printf(" ");
		}
		//打印*
		for (j = 0; j < 2 * i + 1; j++) {
			printf("*");
		}
		printf("\n");
	}
	//打印下半部分

	for (i = 0; i < line; i++) {
		//打印空格
		int j = 0;
		for (j = 0; j <= i; j++) {
			printf(" ");
		}
		//打印*
		for (j = 0; j < 2 * (line - 1 - i) - 1; j++) {
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
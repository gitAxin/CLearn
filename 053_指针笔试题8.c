#define _CRT_SECURE_NO_DEPRECATE 1

#include <stdio.h>
int main() {

	char* c[] = {"ENTER","NEW","POINT","FIRST"};
	char** cp[] = {c+3,c+2,c+1,c};
	char*** cpp = cp;
	printf("%s\n", **++cpp);//POINT
	printf("%s\n", *--*++cpp+3);//ER  (ENTER�е�ER)
	printf("%s\n", *cpp[-2] + 3);//ST (FIRST�е�ST)
	printf("%s\n", cpp[-1][-1] + 1);//EW (NEW�е�EW)
	return 0;
}

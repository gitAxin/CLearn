#define _CRT_SECURE_NO_DEPRECATE 1

#include <stdio.h>



int print(int n) {
	if (n > 9) {
		print(n / 10);
	}
	n = n % 10;
	printf("%d\n", n);
	return 0;
}
int main() {

	unsigned int num = 0;
	scanf("%d", &num);
	print(num);
	return 0;
}
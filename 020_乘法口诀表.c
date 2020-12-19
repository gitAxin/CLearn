#include <stdio.h>
//³Ë·¨¿Ú¾÷±í
int main() {
	for (int i = 1; i <= 9; i++) {
		for (int k = 1; k <= i; k++) {
			int r = i * k;
			printf("%d*%d=%d\t", i, k, r);
		}
		printf("\n");
	}

	return 0;
}

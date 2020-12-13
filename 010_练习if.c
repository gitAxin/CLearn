#include <stdio.h>

int main() {

	//printOdd();
	int num = 3;
	int result = isOdd(num);
	printf("%d\n", result);


	return 0;
}

int printOdd() {
	for (int i = 1; i <= 100; i++) {
		if (i % 2 != 0) {
			printf("%d\n", i);
		}
	}
}

int isOdd(int num) {

	if (num % 2 == 0) {
		return 0;
	}
	return 1;

}
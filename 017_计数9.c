#include <stdio.h>
//1-100之前有多少个9
int main() {
	int count = 0;
	for (int i = 1; i < 100; i++) {
		if (i % 10 == 9) {
			count++;
		}
		if (i / 10 == 9) {
			count++;
		}
	}
	printf("count = %d\n", count);
	
}

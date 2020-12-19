#include <stdio.h>
//¼ÆËã1/1 - 1/2 + 1/3 - 1/4 + 1/5 - 1/6 +......+1/99 - 1/100µÄÖµ
int main() {

	double result = 0;
	for (int i = 1; i <= 100; i+=2) {
		result += (1.0 / i) - (1.0 / (i + 1));
		
	}
	printf("%f\n", result);

	result = 0;
	for (int i = 1; i <= 100; i ++) {
		result += 1.0 / i;

	}
	printf("%f\n", result);
	return 0;
}

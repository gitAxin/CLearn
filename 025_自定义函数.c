#include <stdio.h>
#include <math.h>;
//�ж�һ�����Ƿ�������
int isPrime(int num)
{
	for (int i = 2; i <= sqrt(num); i++) {
		if (num % i == 0) {
			return 0;
		}
	}
	return 1;
}


int main() {
	for (int i = 100; i <= 200; i++) {
		if (isPrime(i)) {
			printf("%d ", i);
		}
	}

	return 0;
}
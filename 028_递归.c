#include	<stdio.h>
/*
* 递归求斐波那契
*/
int fibo(int n) {
	if (n <= 2) {
		return 1;
	}
	return fibo(n - 2) + fibo(n - 1);
}

/*
* 迭代求斐波那契
*/
int fibo2(int n) {
	if (n <= 2) {
		return 1;
	}

	int n1 = 1;
	int n2 = 1;
	int n3 = 0;
	for (int i = 3; i <= n; i++) {
		n3 = n1 + n2;
		n1 = n2;
		n2 = n3;
	}
	return n3;
}

int main() {

	int result = fibo(10);
	printf("%d\n", result);
	int result2 = fibo2(10);
	printf("%d\n", result2);
	return 0;
}


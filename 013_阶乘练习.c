#define _CRT_SECURE_NO_DEPRECATE 1
#include <stdio.h>

int main(void) {

	
	int num;
	printf("�׳˼���->:");
	scanf("%d", &num);
	int result = JieCheng(num);
	printf("%d�Ľ׳˽��:%d\n", num,result);


	AddJieCheng();
	AddJieCheng2();

}

int JieCheng(int num) {

	int result = 1;
	for (int i = 1; i <= num; i++) {
		result *= i;
	}
	return result;

}


// 1!+2!+3!+4!+.....+10!;
int AddJieCheng() {
	int sum = 0;
	for (int i = 1; i <= 3; i++) {
		int result = 1;
		for (int j = 1; j <= i; j++) {
			result *= j;
		}
		sum += result;
	}
	printf("%d\n", sum);
	
}

//�Ż���
// 1!+2!+3!+4!+.....+10!;
int AddJieCheng2() {
	int sum = 0;
	int result = 1;
	for (int i = 1; i <= 3; i++) {
		result = result * i;
		sum += result;
	}
	printf("%d\n", sum);

}

#define _CRT_SECURE_NO_DEPRECATE 1

#include <stdio.h>
//�������������Լ��
//շת�����
int main() {

	int num1 = 24;
	int num2 = 18;
	printf("����������->:");
	scanf("%d%d", &num1, &num2);
	int r = 0;
	while (num1 % num2) {

		r = num1 % num2;
		num1 = num2;
		num2 = r;
	}
	printf("���Լ��Ϊ��%d\n", r);



	return 0;
}
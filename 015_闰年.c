#define _CRT_SECURE_NO_DEPRECATE 1

#include <stdio.h>
//����
int main() {

	/*
	* �����������
	* 1.��4�������Ҳ��ܱ�100����
	* 2.��400����
	*/
	int year = 0;
	int count = 0;
	for (year = 1000; year <= 2000; year++) {
		if (year % 4 == 0 && year % 100 != 0) {
			printf("%d ", year);
			count++;
		}
		else if (year % 400 == 0) {
			printf("%d ", year);
			count++;
		}

	}
	printf("\n����%d������", count);



	return 0;
}
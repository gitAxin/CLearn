#define _CRT_SECURE_NO_DEPRECATE 1





#include <stdio.h>
#include <string.h>
#include <assert.h>
#include <math.h>

/*
*��� 0-100000֮�������ˮ�ɻ��������
ˮ�ɻ���:һ��Nλ��������ÿλ��N�η�֮�͵���������
		��:153 = 1^3 + 5^3 + 3^3
		�� 153��һ��ˮ�ɻ���
*/

int main() {
	int i = 0;
	for (i = 0; i <= 100000; i++) {
		//�ж�i�Ƿ�Ϊˮ�ɻ���(������)
		//1.����i��λ�� nλ��
		int n = 1;
		int tmp = i;
		int sum = 0;
		while (tmp / 10) {
			tmp = tmp / 10;
			n++;
		}
		

		//2.����i��ÿһλ��n�η�֮�� sum
		tmp = i;
		while (tmp) {
			sum += (int)pow(tmp % 10, n);
			tmp = tmp / 10;
		}


		//3. �Ƚ� i == sum
		if (i == sum) {
			printf("%d ", i);
		}
	}
	
	return 0;
}

#include <stdio.h>
#include <math.h>
//100-200֮������

//�йؽ̳̣�����������N�־��硷https://blog.csdn.net/qq_41809901/article/details/100105117
int main() {
	//����1
	SuShu();
	//����2
	SuShuPlus();
	//����3
	SuShuPlus2();
}

int SuShu() {
	int i = 0;
	int count = 0;
	for (i = 100; i <= 200; i++) {

		//�����жϵĹ���
		//1.�Գ���������ֻ�ܱ�1������������
		//����2->i-1������
		int j = 0;
		int flag = 1;
		for (j = 2; j < i; j++) {
			if (i % j == 0) {
				flag = 0;
				break;
			}
		}
		if (flag) {
			count++;
			printf("%d ", i);
		}


	}
	printf("\ncount = %d\n", count);
	return 0;
}

//�Ż�
int SuShuPlus() {
	int i = 0;
	int count = 0;
	for (i = 100; i <= 200; i++) {

		//�����жϵĹ���
		//1.�Գ���������ֻ�ܱ�1������������
		//����2->i-1������
		int j = 0;
		int flag = 1;
		for (j = 2; j <= sqrt(i); j++) { //Ҳ����ȡ i / 2;
			if (i % j == 0) {
				flag = 0;
				break;
			}
		}
		if (flag) {
			count++;
			printf("%d ", i);
		}


	}
	printf("\ncount = %d\n", count);
	return 0;
}

//�Ż�
int SuShuPlus2() {
	int i = 0;
	int count = 0;
	//ż���϶�������������������ֻ��Ҫ�������в���
	for (i = 101; i <= 200; i+=2) {

		//�����жϵĹ���
		//1.�Գ���������ֻ�ܱ�1������������
		//����2->i-1������
		int j = 0;
		int flag = 1;
		for (j = 2; j <= sqrt(i); j++) { //Ҳ����ȡ i / 2;
			if (i % j == 0) {
				flag = 0;
				break;
			}
		}
		if (flag) {
			count++;
			printf("%d ", i);
		}


	}
	printf("\ncount = %d\n", count);
	return 0;
}
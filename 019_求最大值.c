#include <stdio.h>
//��10�����е����ֵ
int main() {
	int arr[] = {33,56,12,98,88,100,231,345,876,231};
	int max = arr[0];
	int len = sizeof(arr) / sizeof(arr[0]);
	for (int i = 1; i < len; i++) {
		if (arr[i] > max) {
			max = arr[i];
		}
	}
	printf("���ֵ��%d\n", max);
	
	return 0;
}

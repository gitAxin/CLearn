#include <stdio.h>
//求10个数中的最大值
int main() {
	int arr[] = {33,56,12,98,88,100,231,345,876,231};
	int max = arr[0];
	int len = sizeof(arr) / sizeof(arr[0]);
	for (int i = 1; i < len; i++) {
		if (arr[i] > max) {
			max = arr[i];
		}
	}
	printf("最大值：%d\n", max);
	
	return 0;
}

#include <stdio.h>
/*数组作为参数时，传入的其实时数组中第1个元素的地址*/
void BubbSort(int arr[], int len) {
	
	for (int i = 0; i < len - 1; i++) {
		int flag = 1;
		for (int j = 0; j < len - 1 - i; j++) {
			if (arr[j] > arr[j + 1]) {
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
				flag = 0;
			}
		}
		if (flag) {
			break;
		}
	}

}
int main() {

	int arr[] = { 3,2,5,8,7,1,11,12,10 };

	int len = sizeof(arr) / sizeof(arr[0]);

	//冒泡排序
	BubbSort(arr, len);
	for (int i = 0; i < len; i++) {
		printf("%d ", arr[i]);
	}

	return 0;
}
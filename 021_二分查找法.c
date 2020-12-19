#include <stdio.h>

int main() {
	FindItemPlus();
	return 0;
}


//二分查找法
int FindItemPlus() {
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int k = 15;
	int len = sizeof(arr) / sizeof(arr[0]);
	int left = 0;
	int right = len - 1;


	while (left <= right) {
		int mid = (left + right) / 2;

		if (arr[mid] > k) {
			right = mid - 1;
		}
		else if (arr[mid] < k) {
			left = mid + 1;
		}
		else {
			printf("找到了，下标是%d\n", mid);
			break;
		};
	}
	if (left > right) {
		printf("没有找到\n");
	}

	return 0;


}
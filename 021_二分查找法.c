#include <stdio.h>

int main() {
	FindItemPlus();
	return 0;
}


//���ֲ��ҷ�
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
			printf("�ҵ��ˣ��±���%d\n", mid);
			break;
		};
	}
	if (left > right) {
		printf("û���ҵ�\n");
	}

	return 0;


}
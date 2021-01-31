#define _CRT_SECURE_NO_DEPRECATE 1

#include <stdio.h>
#include <string.h>
#include <assert.h>
#include <math.h>


/*
* 输入一个整数数组,实现一个函数
* 调整该数组中数字的顺序使得数组中的所有奇数位于数组的前半部分,所有偶数位于数组的后半部分
* 
*/

void print(int arr[], int sz) {
	int i = 0; 
	for (i = 0; i < sz; i++) {
		printf("%d ", arr[i]);
	}
}

void move(int arr[], int sz) {
	int left = 0;
	int right = sz - 1;
	while (left < right) {
		//1.从左边开始找1个偶数
		while ((left < right) && (arr[left] % 2 == 1)) {
			left++;
		}
		//2.从右边开始找1个奇数
		while ((left < right) && (arr[right] % 2 == 0)) {
			right--;
		}
		//3.将它们交换
		if (left < right) {
			int temp = arr[left];
			arr[left] = arr[right];
			arr[right] = temp;
		}
	}


	
	
	
}
int main() {
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	move(arr,sz);
	print(arr, sz);


	return 0;
}
#define _CRT_SECURE_NO_DEPRECATE 1

#include <stdio.h>
#include <string.h>
#include <assert.h>
#include <math.h>


/*
* ����һ����������,ʵ��һ������
* ���������������ֵ�˳��ʹ�������е���������λ�������ǰ�벿��,����ż��λ������ĺ�벿��
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
		//1.����߿�ʼ��1��ż��
		while ((left < right) && (arr[left] % 2 == 1)) {
			left++;
		}
		//2.���ұ߿�ʼ��1������
		while ((left < right) && (arr[right] % 2 == 0)) {
			right--;
		}
		//3.�����ǽ���
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
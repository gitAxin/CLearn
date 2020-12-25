#define _CRT_SECURE_NO_DEPRECATE 1

#include <stdio.h>
#include <string.h>

int main() {
	int arr[] = {1,2,3,4,5,6,7,8,9,10};
	int sz = sizeof(arr) / sizeof(arr[0]);
	//每个地址之间相差4，那是因为都是数组元素都是整形的
	for (int i = 0; i < sz; i++) {
		printf("&arr[%d]=%p\n", i, &arr[i]);
	}
	return 0;
}
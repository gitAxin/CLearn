#define _CRT_SECURE_NO_DEPRECATE 1



#include <stdio.h>
#include <string.h>
#include <assert.h>
#include <math.h>
/*
���Ͼ���
��һ�����־���,�����ÿ�д������ǵ�����,������ϵ����ǵ�����
��д�����������ľ����в���ĳ�������Ƿ����
Ҫ��ʱ�临�Ӷ�С�� O(N)

1 2 3
4 5 6
7 8 9
*/

int FindNum(int arr[3][3], int k, int row, int col) {
	int x = 0;
	int y = col - 1;
	while (x <= row - 1 && y >= 0) {
		if (arr[x][y] > k) {
			y--;
		}
		else if (arr[x][y] < k) {
			x++;
		}
		else {
			return 1;
		}
	}
	return 0;
	
	
}

//ͨ������ָ��,��ӡ�ҵ����±�
int FindNumPlus(int arr[3][3], int k, int *px, int *py) {
	int x = 0;
	int y = *py - 1;
	while (x <= *px - 1 && y >= 0) {
		if (arr[x][y] > k) {
			y--;
		}
		else if (arr[x][y] < k) {
			x++;
		}
		else {
			*px = x;
			*py = y;
			return 1;
		}
	}
	*px = -1;
	*py = -1;
	return 0;


}

int main() {
	int arr[3][3] = {{1,2,3},
					 {4,5,6},
					 {7,8,9}};

	int k = 7;

	int x = 3;
	int y = 3;
	//int ret = FindNum(arr, k, 3, 3 );
	int ret = FindNumPlus(arr, k, &x, &y);
	if (ret == 1) {
		printf("Found:%d,%d\n",x,y);
	}
	else {
		printf("Not Found\n");
	}



	return 0;
}
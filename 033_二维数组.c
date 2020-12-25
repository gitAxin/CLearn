#include <stdio.h>
int main() {
	int a[3][4] = { 1,2,3,4,5,6 };
	int arr[3][4] = { {1,2,3,4},{5,6,7,8} };
	//二维数组中创建时，只能省略行，不能省略列
	int arr2[][2] = { {1,2},{1,2} };


	//二维数组的使用
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 4; j++) {
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}

	//二维数组在内存中的布局
	//二维数组在内存中也是连续的，和一维数组相同，每一行之间的间隔也是4
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 4; j++) {
			printf("&arr[%d][%d] = %p\n", i,j,&arr[i][j]);
		}
	}


	return 0;
}
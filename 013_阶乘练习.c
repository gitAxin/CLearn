#define _CRT_SECURE_NO_DEPRECATE 1
#include <stdio.h>
#include <string.h>
#include <windows.h>
#include <stdlib.h>

int main(void) {

	
	//int num;
	//printf("阶乘计算->:");
	//scanf("%d", &num);
	//int result = JieCheng(num);
	//printf("%d的阶乘结果:%d\n", num,result);


	//AddJieCheng();
	//AddJieCheng2();	
	//FindItem();

	//PrintStr();
	/*FindItemPlus();*/
	InputPass();

}

int JieCheng(int num) {

	int result = 1;
	for (int i = 1; i <= num; i++) {
		result *= i;
	}
	return result;
}


// 1!+2!+3!+4!+.....+10!;
int AddJieCheng() {
	int sum = 0;
	for (int i = 1; i <= 3; i++) {
		int result = 1;
		for (int j = 1; j <= i; j++) {
			result *= j;
		}
		sum += result;
	}
	printf("%d\n", sum);
	return 0;
}

//优化版
// 1!+2!+3!+4!+.....+10!;
int AddJieCheng2() {
	int sum = 0;
	int result = 1;
	for (int i = 1; i <= 3; i++) {
		result = result * i;
		sum += result;
	}
	printf("%d\n", sum);
	return 0;
}


int FindItem() {
	int arr[] = {1,2,3,4,5,6,7,8,9,10};
	int i = 0;
	int k = 17;
	int sz = sizeof(arr) / sizeof(arr[0]);
	for (i = 0; i < sz; i++) {
		if (arr[i] == k) {
			printf("找到了，下标是%d\n", i);
		}
	}
	if (i >= sz) {
		printf("找不到\n");
	}
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

int PrintStr() {
	char arr1[] = "hello world";
	char arr2[] = "###########";

	

	int left = 0;
	//int right = sizeof(arr1) / sizeof(arr1[0]) - 2;//减2是因为最后还有一个\0，为结束符
	//或者使用strlen(arr1)
	int right = strlen(arr1) - 1;

	

	while (left <= right) {
		system("cls");//stdlib.h
		arr2[left] = arr1[left];
		arr2[right] = arr1[right];
		printf("%s\n", arr2);
		Sleep(1000);//windows.h
		left++;
		right--;
	}
	return 0;
}


int InputPass() {
	char arr[] = "123456";

	int i = 0;
	char password[20] = { 0 };
	for (i = 0; i < 3; i++) {
		printf("请输入密码->:");
		scanf("%s", &password);
		if (strcmp(arr, password) == 0) {
			printf("密码输入正确\n");
			break;
		}
		else {
			printf("密码输入错误\n");
		}
		
	}
	if (i == 3) {
		printf("3次密码输入错误，退出程序！\n");
	}
}
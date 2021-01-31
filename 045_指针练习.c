#define _CRT_SECURE_NO_DEPRECATE 1

#include <stdio.h>
#include <string.h>
int main() {

	printf("======char arr[] = 'abcdef'======\n");

	char arr[] = "abcdef"; // char arr[] = {'a','b','c','d','e','f','\0'}
	//sizeof(arr) 和 &arr 数组名代表的是整个数组
	//其余情况都是首元素的地址

	printf("%d\n", sizeof(arr));//7 sizeof(arr)计算的是数组的大小,单位是字节, 含'\0'
	printf("%d\n", sizeof(arr + 0));//4 or 8 arr+0表示是首元素的地址
	printf("%d\n", sizeof(*arr));// 1  *arr是首元素,计算的是首元素的大小
	printf("%d\n", sizeof(arr[1]));// 1 arr[1]计算的是第2个元素的大小
	printf("%d\n", sizeof(&arr)); // 4 or 8 &arr 计算是地址的大小 虽然是数组的地址, 也是4 or 8
	printf("%d\n", sizeof(&arr + 1));// 4 or 8 加1以后还是地址,计算是地址的大小,只要是地址 就是4 or 8
	printf("%d\n", sizeof(&arr[0] + 1)); // 4 or 8 计算是第2个元素的地址,地址大小只有4或8

	//strlen要考虑 \0,\0不计算长度
	//strlen接收的是地址
	printf("%d\n", strlen(arr));//6  arr是首元素的地址,统计地址内 非\0的长度
	printf("%d\n", strlen(arr + 0));//6 +0后还是首元素的地址
	//printf("%d\n", strlen(*arr));// err 非法访问,*arr取的是首元素'a' strlen需要的是一个地址,那么会将首元素'a'看作地址97,97作为一个地址不是我们的地址,所以属于非法访问
	//printf("%d\n", strlen(arr[1]));// err 依然是非法访问
	printf("%d\n", strlen(&arr)); // 6 数组的地址-数组指针 char(*p)[7] = &arr;
	printf("%d\n", strlen(&arr + 1));// 随机值
	printf("%d\n", strlen(&arr[0] + 1)); //5 首元素的地址a 加上1后就是b的地址,往后数到 \0,所以是5
		

	printf("======char *p = 'abcdef'======\n");

	char *p = "abcdef";//里面只存放了a的地址

	printf("%d\n", sizeof(p)); //4 or 8 p是一个指针变量,计算指针变量p的大小
	printf("%d\n", sizeof(p + 1));//4 or 8 p+1还是一个地址
	printf("%d\n", sizeof(*p));//1  *p指针的是字符a
	printf("%d\n", sizeof(p[0]));//a int arr[10]; arr[0] == *(arr+0) p[0] == *(p+0) == 'a'
	printf("%d\n", sizeof(&p)); //4 or 8
	printf("%d\n", sizeof(&p + 1));//4 or 8+ 1 后还是一个地址
	printf("%d\n", sizeof(&p[0] + 1));// 4 or 8  b的地址


	printf("%d\n", strlen(p)); //6 a的地址往后数 直到\0
	printf("%d\n", strlen(p + 1));//5 b的地址往后数 直到\0
	//printf("%d\n", strlen(*p));// err
	//printf("%d\n", strlen(p[0]));// err
	printf("%d\n", strlen(&p)); //随机值 p本来是一个指针,随得这个指针的地址,这个地址往后数是一个随机的长度
	printf("%d\n", strlen(&p + 1));//随机
	printf("%d\n", strlen(&p[0] + 1));//5 b的地址往后数


	printf("======二维数组 int a[3][4] = {0}======\n");
	int a[3][4] = { 0 };//3行4列

	printf("%d\n", sizeof(a));//48
	printf("%d\n", sizeof(a[0][0]));//4
	printf("%d\n", sizeof(a[0]));//16 a[0]相当于第一行作为一维数组的数组名,sizeof(arr[0])把数组名单独放在sizeof(内),计算一行的大小
	printf("%d\n", sizeof(a[0] + 1));//4 or 8 a[0]相当于一个一维数组名,数组非单独放入sizeof, 所以是首元素地址(第1行第1个),首元素地址+1,就是第2个元素地址(第1行第2个),因为是地址,所以就是4 or 8
	printf("%d\n", sizeof(*(a[0] + 1))); //4 对 第1个第2个元素解引用,是int型,所以是4
	printf("%d\n", sizeof(a + 1));//4 or 8 a是首元素地址,因为是二维数组,所以首元素是第一行的地址,首元素地址+1,就是第2行地址,既然是地址,所以是4 or 8
	printf("%d\n", sizeof(*(a + 1))); //16 对第2行地址解引用,第二个是个数组,相当于 sizeof(a[1])
	printf("%d\n", sizeof(&a[0] + 1));//4 or 8 第1行地址,加1就是第2行地址,即然是第2行地址所以是4 or 8
	printf("%d\n", sizeof(*(&a[0] + 1))); //16 第二行地址解引用
	printf("%d\n", sizeof(*a)); //16 a是首元素地址,首元素地址是一行,所以是计算第一行的大小
	printf("%d\n", sizeof(a[3]));//16,sizeof内部是不会真正访问的第四行的,其实和a[0]是一样的



	return 0;
}
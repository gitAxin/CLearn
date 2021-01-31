#define _CRT_SECURE_NO_DEPRECATE 1

#include <stdio.h>
#include <string.h>
int main() {

	printf("======char arr[] = 'abcdef'======\n");

	char arr[] = "abcdef"; // char arr[] = {'a','b','c','d','e','f','\0'}
	//sizeof(arr) �� &arr ���������������������
	//�������������Ԫ�صĵ�ַ

	printf("%d\n", sizeof(arr));//7 sizeof(arr)�����������Ĵ�С,��λ���ֽ�, ��'\0'
	printf("%d\n", sizeof(arr + 0));//4 or 8 arr+0��ʾ����Ԫ�صĵ�ַ
	printf("%d\n", sizeof(*arr));// 1  *arr����Ԫ��,���������Ԫ�صĴ�С
	printf("%d\n", sizeof(arr[1]));// 1 arr[1]������ǵ�2��Ԫ�صĴ�С
	printf("%d\n", sizeof(&arr)); // 4 or 8 &arr �����ǵ�ַ�Ĵ�С ��Ȼ������ĵ�ַ, Ҳ��4 or 8
	printf("%d\n", sizeof(&arr + 1));// 4 or 8 ��1�Ժ��ǵ�ַ,�����ǵ�ַ�Ĵ�С,ֻҪ�ǵ�ַ ����4 or 8
	printf("%d\n", sizeof(&arr[0] + 1)); // 4 or 8 �����ǵ�2��Ԫ�صĵ�ַ,��ַ��Сֻ��4��8

	//strlenҪ���� \0,\0�����㳤��
	//strlen���յ��ǵ�ַ
	printf("%d\n", strlen(arr));//6  arr����Ԫ�صĵ�ַ,ͳ�Ƶ�ַ�� ��\0�ĳ���
	printf("%d\n", strlen(arr + 0));//6 +0������Ԫ�صĵ�ַ
	//printf("%d\n", strlen(*arr));// err �Ƿ�����,*arrȡ������Ԫ��'a' strlen��Ҫ����һ����ַ,��ô�Ὣ��Ԫ��'a'������ַ97,97��Ϊһ����ַ�������ǵĵ�ַ,�������ڷǷ�����
	//printf("%d\n", strlen(arr[1]));// err ��Ȼ�ǷǷ�����
	printf("%d\n", strlen(&arr)); // 6 ����ĵ�ַ-����ָ�� char(*p)[7] = &arr;
	printf("%d\n", strlen(&arr + 1));// ���ֵ
	printf("%d\n", strlen(&arr[0] + 1)); //5 ��Ԫ�صĵ�ַa ����1�����b�ĵ�ַ,�������� \0,������5
		

	printf("======char *p = 'abcdef'======\n");

	char *p = "abcdef";//����ֻ�����a�ĵ�ַ

	printf("%d\n", sizeof(p)); //4 or 8 p��һ��ָ�����,����ָ�����p�Ĵ�С
	printf("%d\n", sizeof(p + 1));//4 or 8 p+1����һ����ַ
	printf("%d\n", sizeof(*p));//1  *pָ������ַ�a
	printf("%d\n", sizeof(p[0]));//a int arr[10]; arr[0] == *(arr+0) p[0] == *(p+0) == 'a'
	printf("%d\n", sizeof(&p)); //4 or 8
	printf("%d\n", sizeof(&p + 1));//4 or 8+ 1 ����һ����ַ
	printf("%d\n", sizeof(&p[0] + 1));// 4 or 8  b�ĵ�ַ


	printf("%d\n", strlen(p)); //6 a�ĵ�ַ������ ֱ��\0
	printf("%d\n", strlen(p + 1));//5 b�ĵ�ַ������ ֱ��\0
	//printf("%d\n", strlen(*p));// err
	//printf("%d\n", strlen(p[0]));// err
	printf("%d\n", strlen(&p)); //���ֵ p������һ��ָ��,������ָ��ĵ�ַ,�����ַ��������һ������ĳ���
	printf("%d\n", strlen(&p + 1));//���
	printf("%d\n", strlen(&p[0] + 1));//5 b�ĵ�ַ������


	printf("======��ά���� int a[3][4] = {0}======\n");
	int a[3][4] = { 0 };//3��4��

	printf("%d\n", sizeof(a));//48
	printf("%d\n", sizeof(a[0][0]));//4
	printf("%d\n", sizeof(a[0]));//16 a[0]�൱�ڵ�һ����Ϊһά�����������,sizeof(arr[0])����������������sizeof(��),����һ�еĴ�С
	printf("%d\n", sizeof(a[0] + 1));//4 or 8 a[0]�൱��һ��һά������,����ǵ�������sizeof, ��������Ԫ�ص�ַ(��1�е�1��),��Ԫ�ص�ַ+1,���ǵ�2��Ԫ�ص�ַ(��1�е�2��),��Ϊ�ǵ�ַ,���Ծ���4 or 8
	printf("%d\n", sizeof(*(a[0] + 1))); //4 �� ��1����2��Ԫ�ؽ�����,��int��,������4
	printf("%d\n", sizeof(a + 1));//4 or 8 a����Ԫ�ص�ַ,��Ϊ�Ƕ�ά����,������Ԫ���ǵ�һ�еĵ�ַ,��Ԫ�ص�ַ+1,���ǵ�2�е�ַ,��Ȼ�ǵ�ַ,������4 or 8
	printf("%d\n", sizeof(*(a + 1))); //16 �Ե�2�е�ַ������,�ڶ����Ǹ�����,�൱�� sizeof(a[1])
	printf("%d\n", sizeof(&a[0] + 1));//4 or 8 ��1�е�ַ,��1���ǵ�2�е�ַ,��Ȼ�ǵ�2�е�ַ������4 or 8
	printf("%d\n", sizeof(*(&a[0] + 1))); //16 �ڶ��е�ַ������
	printf("%d\n", sizeof(*a)); //16 a����Ԫ�ص�ַ,��Ԫ�ص�ַ��һ��,�����Ǽ����һ�еĴ�С
	printf("%d\n", sizeof(a[3]));//16,sizeof�ڲ��ǲ����������ʵĵ����е�,��ʵ��a[0]��һ����



	return 0;
}
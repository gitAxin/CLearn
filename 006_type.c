#include <stdio.h>
/*
* %d -> ��ӡ����
* %c -> ��ӡ�ַ�
* %f -> ��ӡ��������
* %p -> �Ե�ַ����ʽ��ӡ
* %x -> ��ӡ16��������
* %#X -> ��ӡ16��������
* %o -> ��ӡ8��������
* 
*/
int main(void) {
	char ch = 'a';
	printf("%c\n",ch);

	short int size = 2;
	printf("%d\n", size);

	int age = 20;
	printf("%d\n", age);
	
	long int length = 10000;
	printf("%d\n", length);
	
	//long long ll = 22222222;
	//printf("%ld\n", ll);

	float f = 3.14;
	printf("%f\n", f);

	double d = 3.1415926;
	printf("%lf\n", d);




	return 0;
}
#include <stdio.h>


//ȡ��ַ��
int main() {

	double d = 3.14;
	double* pd = &d;//ָ�����
	*pd = 5.5;
	printf("%lf\n", d);
	printf("%lf\n", *pd);

	printf("%d\n", sizeof(pd));  //32λƽ̨:4 64λƽ̨:8


	int a = 2;
	printf("a=%d\n", a);
	printf("��ַ:%p\n", &a);
	int* p = &a;//p��һ������=>ָ�����
	printf("��ַ:%p\n", p);
	*p = 4;//�����ò�����//��ӷ��ʲ�����
	printf("a=%d\n", a);
	return 0;


}
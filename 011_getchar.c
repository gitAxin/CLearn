#define _CRT_SECURE_NO_DEPRECATE 1

#include <stdio.h>
int main()
{
	//int ch;
	 //EOF -> end of file
	//while ((ch = getchar()) != EOF) {
	//	putchar(ch);
	//}
	char password[20] = { 0 };
	int ch;
	int ret;
	printf("����������->:");
	scanf("%s", &password);
	//����س����س�ǰ�������ַ�
	while ((ch = getchar()) != '\n') 
	{
		;
	}
	printf("ȷ������(Y/N)->:");
	
	ret = getchar();
	if ('Y' == ret) {
		printf("��ȷ��\n");
	}
	else {
		printf("��ȡ��\n");
	}

	return 0;
}
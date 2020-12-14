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
	printf("请输入密码->:");
	scanf("%s", &password);
	//清除回车及回车前的所有字符
	while ((ch = getchar()) != '\n') 
	{
		;
	}
	printf("确认密码(Y/N)->:");
	
	ret = getchar();
	if ('Y' == ret) {
		printf("已确认\n");
	}
	else {
		printf("已取消\n");
	}

	return 0;
}
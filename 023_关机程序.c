#define _CRT_SECURE_NO_DEPRECATE 1
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main() {

	char input[20] = { 0 };
	//shutdown -s -t 60
	//system() -> 执行系统命令
	system("shutdown -s -t 60");
again:
	printf("你的电脑在1分钟内关机，如果输入：我是小狗，就取消关机\n请输入->:");
	scanf("%s", &input);
	if (0 == strcmp(input, "我是小狗")) {
		system("shutdown -a");
	}
	else {
		goto again;
	}
	return 0;
}
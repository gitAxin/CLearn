#define _CRT_SECURE_NO_DEPRECATE 1
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main() {

	char input[20] = { 0 };
	//shutdown -s -t 60
	//system() -> ִ��ϵͳ����
	system("shutdown -s -t 60");
again:
	printf("��ĵ�����1�����ڹػ���������룺����С������ȡ���ػ�\n������->:");
	scanf("%s", &input);
	if (0 == strcmp(input, "����С��")) {
		system("shutdown -a");
	}
	else {
		goto again;
	}
	return 0;
}
#define _CRT_SECURE_NO_DEPRECATE 1
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/*
* ��������Ϸ
* 1.������������һ������
* 2.�û�����²�����
* 3.�����жϲ´��˻��ǲ�С�ˣ�ֱ������ȷ��
*/


void Game() {
	int r = rand()%100 + 1; //����1-100֮�������
	/*printf("%d\n", r);*/

	//������
	int guess = 0;
	while (1) {
		printf("�������->:");
		scanf("%d", &guess);
		if (guess > r) {
			printf("�´��ˣ�\n");
		}
		else if (guess < r) {
			printf("��С�ˣ�\n");
		}
		else {
			printf("�¶��ˣ�\n");
			break;
		}
	}

}
void Menu() {
	printf("====================================\n");
	printf("=       1.play    0.exit           =\n");
	printf("====================================\n");
}

int main() {
	srand((unsigned int)time(NULL));
	int input = 0;
	do {
		Menu();	
		scanf("%d", &input);

		switch(input){
			case 1:
				Game();
				break;
			case 0:
				printf("�˳���Ϸ\n");
				break;
			default:
				printf("ѡ�����\n");
				break;
		}

	} while (input);
	

	return 0;
}


#define _CRT_SECURE_NO_DEPRECATE 1
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/*
* 猜数字游戏
* 1.计算机随机生成一个数字
* 2.用户输入猜测数字
* 3.程序判断猜大了或是猜小了，直到猜正确。
*/


void Game() {
	int r = rand()%100 + 1; //生成1-100之间的数字
	/*printf("%d\n", r);*/

	//猜数字
	int guess = 0;
	while (1) {
		printf("请猜数字->:");
		scanf("%d", &guess);
		if (guess > r) {
			printf("猜大了！\n");
		}
		else if (guess < r) {
			printf("猜小了！\n");
		}
		else {
			printf("猜对了！\n");
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
				printf("退出游戏\n");
				break;
			default:
				printf("选择错误\n");
				break;
		}

	} while (input);
	

	return 0;
}


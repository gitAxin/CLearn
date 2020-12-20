#include <stdio.h>

#include "mul.h" //引入在外部自定义的函数

int Add(int, int);
/*
*一、	正常使用时一般都是将声明放在*.h头文件中
*		定义放在*.c文件中
*		然后在需要使用地文件中 #include "*.h" 文件  (自定义的头文件使用双引号)
*二、	如果在main函数中使用了当前文件中定义的函数时，建议把函数定义在main方法前面；
*		而非在前面单独声明（虽然那样也可以） ，定义的方法写在main函数后面
*/


int main() {
	
	int x = 1;
	int y = 2;
	int z = Add(x, y);
	printf("z=%d\n", z);

	z = Mul(x, y);//外部文件定义的方法
	printf("z=%d\n", z);
	return 0;

}

int Add(int x, int y) {
	return x + y;
}
#include<stdio.h>

void Swap(int* px, int* py) {
	int temp = 0;
	temp = *px;
	*px = *py;
	*py = temp;
}

int main() {
	int x = 10;
	int y = 20;
	printf("x=%d,y=%d", x, y);
	Swap(&x,&y);
	printf("x=%d,y=%d", x, y);

}
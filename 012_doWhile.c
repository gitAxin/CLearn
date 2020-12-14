#include <stdio.h>

int main(void) {

	int i = 1;
	do
	{
		if (i == 5) {
			break;//1234
			continue;//1234.....À¿—≠ª∑
		}
		printf("%d\n", i);
		i++;

	} while (i <= 10);
}
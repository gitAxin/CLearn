#include <stdio.h>

#include "mul.h" //�������ⲿ�Զ���ĺ���

int Add(int, int);
/*
*һ��	����ʹ��ʱһ�㶼�ǽ���������*.hͷ�ļ���
*		�������*.c�ļ���
*		Ȼ������Ҫʹ�õ��ļ��� #include "*.h" �ļ�  (�Զ����ͷ�ļ�ʹ��˫����)
*����	�����main������ʹ���˵�ǰ�ļ��ж���ĺ���ʱ������Ѻ���������main����ǰ�棻
*		������ǰ�浥����������Ȼ����Ҳ���ԣ� ������ķ���д��main��������
*/


int main() {
	
	int x = 1;
	int y = 2;
	int z = Add(x, y);
	printf("z=%d\n", z);

	z = Mul(x, y);//�ⲿ�ļ�����ķ���
	printf("z=%d\n", z);
	return 0;

}

int Add(int x, int y) {
	return x + y;
}
#define _CRT_SECURE_NO_DEPRECATE 1

#include  <stdio.h>
#include <string.h>
//�ṹ��
struct Book {
	char name[20];//����
	short price;//�۸�


};
typedef struct Pointer {
	int x;
	int y;
}Pointer;//����


int main() {

	Pointer p = { 1,2 };//ʹ��typedef�ؼ��ֶ�������ͣ���ʹ��ʱ���Բ��ü�struct�ؼ���

	struct Book b1 = {
		"C����",60
	};


	printf("����:%s\n", b1.name);
	printf("�۸�:%d\n", b1.price);
	b1.price = 50;

	printf("�޸ĺ�ļ۸�:%d\n", b1.price);

	strcpy(b1.name, "C++");
	printf("�޸ĺ������:%s\n", b1.name);

	struct Book* pb = &b1;
	printf("%p\n", pb);
	//�������: �ṹ�����->��Ա
	printf("%s\n", (*pb).name);
	printf("%d\n", (*pb).price);

	//��ͷ������:�ṹ��ָ��->��Ա
	printf("%s\n", pb -> name);
	printf("%d\n", pb -> price);


	return 0;
}
/* 
    ���̿��� 
    1. ʲô�����̿��� 
        �������ִ�е�˳��
    2.���̿��Ƶķ���    
        ˳��
        ��֧
            ��ѡ���ִ��ĳЩ����
            if
                1.if��򵥵��÷�
                2. if�ķ�Χ����
                3. if..else..���÷�
                4. if..else if..else...���÷�
                5. C���Զ���ٵĴ���
                6. if����--������ĵȼ�
                7. �����������
            switch
        ѭ��
 */

# include <stdio.h>

int main(void){
   

    if( 1 > 2)
       printf("��\n");

    if(0)
        printf("0\n");

    if(1)
        printf("1\n");

    //IF�ķ�Χ���⣺if Ĭ��ֻ�ܿ���һ������ִ��
    if(1 > 2)
        printf("aaa\n");
        printf("bbb\n");

    if(1 > 2){
        printf("ccc\n");
        printf("ddd\n");
    }
       
  

    return 0;
}
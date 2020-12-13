# include <stdio.h>
/**
 * 通过键盘将数据输入到变量中
 * 两种用法：
 *  一：scanf("输入控制符",“输入参数”)
 *          将从键盘转入的字符转化为输入控制符所规定格式的数据，然后存入以输入参数
 *          的值为地址的变量中
 *    二:scanf("非输入控制符 输入控制符"，“输入参数”)
 *              非输入控制符必须原样输入
 * 
 * 
 * */
int main(void){
    int a;
    // printf("请输入一个数字：\n");
    // &a 取地址符
    // scanf("%d",&a);
    // printf("a = %d\n",a);

    //  printf("请输入一个以字符m开头的字符串：\n");
    // scanf("m%d",&a);
    // printf("a = %d\n",a);

//     int i, k, j;
//    printf("输入三个数字,以空格分隔：\n");
//    scanf("%d %d %d",&i,&k,&j);
//    printf("i = %d, k = %d, j = %d",i,k,j);

//---------------------------------------------
   

    // int i;
    // scanf("%d",&i);
    // printf("i = %d\n",i);

    // char ch;
    // while( (ch=getchar()) != '\n')
    //     continue;

    //  int j;
    // scanf("%d",&j);
    // printf("j = %d\n",j);

    //测试输入多个字符，未成功 %s控制符待确定
    // char s;
    // printf("请输入一个字符:\n");
    // scanf("%c",&s);
    // printf("%s",s);
    

    return 0;
}
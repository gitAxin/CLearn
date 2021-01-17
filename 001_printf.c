/*
    2020年10月27日15:3:34
    printf的使用
    //输出控制符包含如下：
    %d  输出整型
    %u 输出十进制的无符号整型
    %ld  输出长整型
    %c 输出char类型
    %f 输出单精度浮点型
    %lf 输出双精度浮点型
    %o 输出8进制
    %x或%X或%#x 输出十六进制
    %s 输出字符串
*/
# include <stdio.h>
int main()
{
    int i = 47;
    printf("%d\n",i);//输出十进制
    printf("%#o\n",i);//输出八进制
    printf("%x\n",i);//输出十六进制
    printf("%X\n",i);//输出十六进制
    printf("%#X\n",i);//输出十六进制
    
    return 0;
}
/*
输出：
----------------------------------------
47
57
2f
2F
0X2F
----------------------------------------
%d：输出控制符
为什么需要输出控制符
1.01组成的代码可以表示数据也可以表示指令
2.如果01组成的代码表示的是数据的话，那么同样的01代码组合以不同的输出格式输出就会有不同的结果



*/
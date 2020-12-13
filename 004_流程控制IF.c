/* 
    流程控制 
    1. 什么是流程控制 
        程序代码执行的顺序
    2.流程控制的分类    
        顺序
        分支
            有选择的执行某些代码
            if
                1.if最简单的用法
                2. if的范围问题
                3. if..else..的用法
                4. if..else if..else...的用法
                5. C语言对真假的处理
                6. if举例--求分数的等级
                7. 常见问题解析
            switch
        循环
 */

# include <stdio.h>

int main(void){
   

    if( 1 > 2)
       printf("真\n");

    if(0)
        printf("0\n");

    if(1)
        printf("1\n");

    //IF的范围问题：if 默认只能控制一条语句的执行
    if(1 > 2)
        printf("aaa\n");
        printf("bbb\n");

    if(1 > 2){
        printf("ccc\n");
        printf("ddd\n");
    }
       
  

    return 0;
}
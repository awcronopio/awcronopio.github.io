#include <stdio.h>
int main()
{
    //int a = 10;//a在内存中要分配空间 4个字节
    //printf("%p\n", &a); //%p 专门用来打印地址,&a取出变量地址
    //int * pa = &a;//pa是用来存放地址的，在C语言中pa叫指针变量
    //*  说明pa是指针变量
    //int说明pa执行的对象是int类型的

    //char ch = 'w';
    //char * pc = &ch;
    //printf("%p\n", &ch);
    //return 0;

    int a = 10;
    int* pa = &a;

    *pa = 20; //*解引用操作，*pa就是通过pa里面的地址，找到a
    
    printf("%d\n", a);
    //打印结果 20  借助pa间接改变a
    return 0;
}

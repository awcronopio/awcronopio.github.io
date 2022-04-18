#include <stdio.h>
int main()
{
    //int ch = getchar();//getchar 获取一个字符,ctrl+z,getchar读取结果，getchar - 缓冲区 - 键盘
    //当输入字符A\n,相当于把A\n放入缓冲区内
    //printf("%c\n", ch);
    //putchar(ch);//putchar输出一个字符
   
   int ch = 0;
   while ((ch=getchar()) != EOF)//EOF end of file 
       putchar(ch);
 
   
   
    return 0;
}


#include <stdio.h>
int main()
{
    int i = 1;
    while (i<=10)
    {
        if (i == 5)
        //break;在while循环中，break用于永久的终止循环
        //continue;在while循环中，continue的作用是跳过本次循环continue后面的代码，直接去判断部分，看是否进行下一循环
        printf("%d\n", i);
       i++;
        
    }
    
}
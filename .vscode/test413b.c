#include <stdio.h>
//输入包括一个一个整数M(1<=M<=100000
//输出一个整数包括一行，如果M可以被5整除就输出YES，否则输出NO


int main()
{
    //输入
int m = 0;
//int b = a % 5;
//printf("输入一个整数M(1<=M<=100000):");//题目没有这样的输入，不需要多此一举
scanf("%d", &m);

    //输出并判断
if(m%5==0)
printf("YES\n");
else
printf("NO\n");
return 0;
}
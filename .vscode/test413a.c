#include <stdio.h>
int sum(int a)//a=2
{
    int c = 0;
    static int b = 3;
    c +=1;//c=1,每次循环重新创建
    b +=2;//不重新创建值，保留上一次循环值
    return (a + b + c);
}

int main()
{
    int i;
    int a = 2;
    for (i = 0; i < 5; i++)
    {
        printf("%d", sum(a));//打印sum值
        //第一次循环 2+1+5
        //第二次循环 2+1+（5+2）
        //第三次循环 2+1+（7+2）
        //第四次循环 2+1+（9+2）
        //第五次循环 2+1+（11+2）
    }
    
}
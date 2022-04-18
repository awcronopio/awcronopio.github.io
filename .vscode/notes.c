#include <stdio.h>
#define  MAX 10000



int main()
{
//int 数据类型 age 变量的名字 = 20 赋值;
    int age = 20;
    double weight = 75.5;
    int n = MAX;

    

    age = age+1;
    weight = weight-20;
    printf("%d\n",age);
    printf("%d\n",weight);
    printf("n=%d\n", n);

    return 0;
}
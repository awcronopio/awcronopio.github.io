#include <stdio.h>

int main()
{
    int i = 0;
    int n = 0;
    int ret = 1;
    int sum = 0;
    //for (n = 1; n <= 10; n++)
    //{
     //   ret = 1;//计算n的阶乘之前，每次把ret初始为1
        //代码效率低，每次酸阶乘都要把ret乘上
        for (n = 1; n <=10; n++)
       {
           ret *= n;  
           sum += ret;
       }
        
    //}
    printf("%d\n", sum);    

    return 0;

}
#include <stdio.h>
int main()
//打印100-200之间的素数
{
    //除了1和自身不能被其他数整除
    
    int count = 0;
    int i = 0;

    for(i = 100; i <= 200; i++)
{
    //判断是否为素数
    //2->i-1之间的数字试除i，看能不呢整除
    int j = 0;
    int flag = 1;//假设i就是素数
    for (j = 2; j < i; j++)
    {
        if (i % j == 0)
        {
            flag = 0;//不是素数
            break;
        }
    }
    //if(i == j)
    if(flag == 1)
    {
       count++;
        printf("%d ", i);//素数
    }
}
    printf("\ncount = %d\n", count);
    return 0;

}
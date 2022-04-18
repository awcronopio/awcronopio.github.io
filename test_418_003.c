#include <stdio.h>
//int main()
//{
//    int m = 0;
//    int n = 0;
//    scanf("%d%d", &m, &n);
//    int max = 0;
    //假设最大公约数就是m和n的较小值
//    if (m > n)
 //       max = n;
//    else
//        max = m;

//    while (1)
//    {
//        if (m % max == 0 && n % max == 0)
 //       {
//            printf("最大公约数就是：%d\n", max);
//            break;
//        }
//        max--;
 //   }

//    return 0;
//}

int main()
{
    int m = 0;
    int n = 0;
    scanf("%d%d", &m, &n);
    int t = 0;
    while(m%n)
    {
        t = m%n;
        m = n;
        n = t;
    }
    printf("最大公约数：%d\n", n);

    return 0;
}

//最小公倍数 = m*n/最大公约数；
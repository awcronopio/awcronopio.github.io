#include <stdio.h>
int main()
{
    int n = 1;
    int m = 2;
    switch (n)
    {
        //n=1 进入
    case 1:m++; //n=1 ,m=3,继续进入case2
    case 2:n++;//n=2,m=3,继续进入case3
    case 3:
        switch (n)//n=2进入case2，m=4，n=3
        {
        case 1:
            n++;
        case 2:
            m++; n++;
        break;
        }//break跳出自己所在的switch结束
    case 4://进入case4
        m++;//m=5
        break;
    default:
        break;
    }
printf("m = %d, n =%d\n", m, n);
return 0;
}
#include <stdio.h>


int main()
{

    char password[20] = { 0 };
        printf("请输入密码：>");//用户通过键盘输入字符1234\n存入缓冲区
    scanf("%s", password);//scanf将字符1234存入password数组内
        printf("请确认密码(Y/N):>");//此时缓冲区内只剩下\n
        //清理缓冲区
        //处理'\n',getchar 只能处理一个字符：
        //getchar();
        //清理缓冲区内的多个字符：
        int tmp = 0;
        while ((tmp = getchar()) != '\n')
        {
            ;
        }
        

        int ch = getchar();//getchar拿走\n存入ch,\n不等于Y，直接else结果
        if (ch == 'Y')
            {
                printf ("确认成功\n");
            }
        else
            {
                printf("确认失败\n");
            }

    return 0;
}
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//写一个猜数字游戏
//1.自动产生1-100之间的一个随机数
//2.猜数字
//a.猜对：恭喜你，游戏结束
//b.猜错：会告诉对方猜大了还是猜小了，继续猜，直到猜对
//3.游戏一直玩，除非退出游戏

void menu()
{
    printf("*******************\n");
    printf("*****1. play  *****\n");
    printf("*****0. exit  *****\n");
    printf("*******************\n");
}


void game()
{
    //猜数字游戏的实现
    //1.先生成随机数
    //rand函数返回了一个0-32767之间的数字
    //时间 - 时间戳，电脑生成的随机数字
    

    int ret = rand()%100+1;//%100的余数是0-99，然后+1，范围就是1-100
    //printf("%d\n", ret);
    //2.猜数字
    int guess = 0;
    while (1)
    {
       printf("请猜数字：>");
       scanf("%d", &guess);
       if (guess < ret)
       {
           printf("猜小了\n");
       }
       else if(guess > ret)
       {
           printf("猜大了\n");
       }
       else 
       {
           printf("恭喜你，猜对了\n");
           break;
       }
       
    }
    
}

int main()
{
    int input = 0;
    srand((unsigned int)time(NULL));
    do
    {
        menu();//打印菜单
        printf("请选择：>");
        scanf("%d", &input);
        switch (input)
        {
        case 1:
            game();
            printf("猜数字\n");
            break;
        case 0:
            printf("退出游戏\n");
            break;
        default:
            printf("选择错误,重新选择\n");
            break;
        }
    }while (input);
   

    return 0;
}
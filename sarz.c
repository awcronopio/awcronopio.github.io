#include <stdio.h>
int main()
{
    int input = 0;//输入的值
    printf("Hello,");
    printf("选择你的属性(1/0)?>");
    scanf("%d", &input);
    if (input == 1)
        printf("你需要0\n");
    else
        printf("你需要1\n");
    return 0;
}
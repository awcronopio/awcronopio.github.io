#include <stdio.h>
#include <string.h>
int main()
{
    printf("c:\\test\\test.c\n");
    printf("%c\n", '\'');
    printf("%s\n", "\"");
    printf("%d\n", 100);
    printf("%c\n", 'a');
    printf("%s\n", "abc");
    //printf在打印数据的时候，可以指定打印的格式

    printf("%c\n", '\130');
    //\ddd表示1-3个8进制数字，8进制的130是十进制的多少呢？1*8^2+3*8^1+0*8^0
    //打印结果X  --ASCII码值是88
    printf("%c\n", '\101');//A - 65 -8进制是101
    printf("%c\n",'\x30');//\dd表示2个16进制数字，30=3*16^1,打印字符0
    printf("%d\n", strlen("c:\test\328\test.c\n"));
    printf("c:\test\328\test.c\n");

    return 0;
}
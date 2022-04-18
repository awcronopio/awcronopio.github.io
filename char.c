#include <stdio.h>
#include <string.h>
int main()
{
    //字符数组-数组是一组相同类型的元素
    //char arr[] = "hello";


    char arr1[] = "abc";
    char arr2[] = {'a', 'b', 'c'};
    //求字符串的长度
    //int len1 = strlen("abc");
   printf("%lu\n", strlen(arr1));//3
   printf("%lu\n", strlen(arr2));//随机值，当arr2加上上结束标注‘\0’后，字符串长度为3

    printf("%s\n", arr1);
    printf("%s\n", arr2);
   //printf("len1=%d\n", len1);
  

    //printf("%s\n",arr);
    return 0;
}


//求字符串长度
//int len = strlen("abc");//string length
//printf("%d\n", len);
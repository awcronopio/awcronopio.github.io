#include <stdio.h>
int main()
{
    //int a = 1;
    //int b = 2;
    //int c = 3;
    //...
    //数组-一组相同类型的元素的集合
    
    //10个整型1-10存起来:
    
    int arr[10] = {1,2,3,4,5,6,7,8,9,10};
    
    //数组用下标访问
    //arr[0]访问第一个元素1
    //arr[1]访问第二个元素2

    int i = 0;
    while (i < 10)
    {
        printf("%d\n", arr[i]);
        i++;
    }
    
    //char ch[5] = {'a','b','c'};//不完全初始化，剩余默认为0

    return 0;

}
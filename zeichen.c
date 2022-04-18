#include <stdio.h>
int main()
{
    //int a = 9/2;
    //float a = 9/2;//除号两端都是整数，算术结果4
    //float a = 9/2.0;
    //int a = 9 % 2;//% - 取模（取余数）
    //printf("%d\n",a);

    //int a = 2;
    //int b = a >> 1;
    //printf("%d\n",b);

    //int a = 2;
    //a = a + 5;
    //a +=5;//复合赋值

    //a = a - 3;
    //a -= 3;

    //a = a % 3;
    //a %= 3;
    //printf("%d\n",a);

    //0表示假，非0表示真
    //int a = 0;
    //printf("%d\n",!a);//!逻辑反操作符，把假变成真，真变成假

   // if(a)
   // {
        //如果a为真，做事
  //  }
  //  if(!a)
   // {
        //如果a为假，做事
  //  }
  //  return 0;

    int arr[10]={0};
    printf("%lu\n", sizeof(arr));//计算数组的总大小（整型），单位是字节
    printf("%lu\n", sizeof(arr[0]));//计算数组中第一个元素的大小
    int sz = sizeof(arr) / sizeof(arr[10]);
    printf("%d\n", sz);
    return 0;
}



//算术操作符：+ — * / %
//移位操作符：


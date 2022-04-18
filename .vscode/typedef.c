#include <stdio.h>

//typedef unsigned int u_int;//把unsigned int 简单写成u_int
//int main()
//{
 //   unsigned int num = 100;
//    u_int num2 = 100;
//    return 0;
//}


//void test()
//{
   // static int a = 1;
  //  a++;
  //  printf("%d ", a);
    // 2 3 4 5 6 7 8 9 10 11
    //出void函数范围a++值没有销毁，依旧保留
    //static修饰局部变量，改变了局部变量的生命周期。本质上是改变了变量的存储类型
    
//}

//int main()
//{
   // int i = 0;
   // while (i<10)
   // {
   //     test();
   //     i++;
  //  }
 //   return 0;
//}

//#define MAX 1000
//int main()
//{
//    printf("%d\n", MAX);
//    return 0;
//}

#define ADD(X,Y) ((X) + (Y))
int main()
{
    printf("%d\n", 4*ADD(2, 3));
    return 0;
}
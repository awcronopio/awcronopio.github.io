#include <stdio.h>

int main()
{
int arr[10] = {0};//10个元素
int n = 10;//即使加上const int n =10 ,具有常属性，n本质还是变量
int arr2[n] = {0};//n是变量的，这里不行
return 0;
}
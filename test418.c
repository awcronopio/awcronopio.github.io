#include <stdio.h>
//在一个有序数组中查找具体的某个数字n，
//编写int binsearch(int x, int v[ ],int n );
//功能：在v[ 0 ]<= v[1]<=v[2]<=…<=v[n-1]的数组中查找x

int main()
{
    int arr[]= {1,2,3,4,5,6,7,8,9,10 };
    int k = 7;//要查找的数字
    //在arr这个有序的数组中查找k(7)的值
    int sz = sizeof(arr) / sizeof(arr[0]);//数组元素个数

    int left = 0;//左边元素下标，下标从0开始
    int right = sz - 1;//右边元素下标
    
   

    while (left <= right)
{
    int mid = (left + right) / 2;
    if (arr[mid] < k)
    {
        left = mid + 1;

    }
    else if (arr[mid] > k)
    {
        right = mid - 1;
    }
    else
    {
        printf("found，下标是: %d\n", mid);
        break;
    }
}
if (left > right)
{
    printf("nt found\n");
}

    return 0;
}
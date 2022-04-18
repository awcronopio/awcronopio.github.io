#include <stdio.h>
//写一个函数比较两个整数中的较大值，输出较大值
int Max(int x, int y)
{
	if (x > y)
	return x;
	else 
	return y;
	
}
int main()
{

	int a = 0;
	int b = 0;
	scanf("%d %d", &a, &b);
	int m = Max(a, b);
	printf("%d\n", m);
	
   return 0;
}

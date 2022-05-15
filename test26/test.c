#define _CRT_SECURE_NO_WARNINGS 1
//题目：利用递归方法求5!。
#include<stdio.h>

int sum = 1;
int print(int n)
{
	if (n > 1)
	{
		sum = sum * n;
		
		print(n-1);
		return sum;
	}
	

	
}
int main()
{
	int i = 5;
	printf("%d!= %d\n",i, print(i));

return 0;
}



//int f(int n)
//{
//	if (n == 1)
//	{
//		return 1;
//	}
//	else
//	{
//		return n * f(n - 1);
//	}
//}
//
//
//
//int main()
//{
//	int m = 5;
//	printf("%d!=%d\n", m, f(m));
//	return 0;
//}
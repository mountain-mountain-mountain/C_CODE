#define _CRT_SECURE_NO_WARNINGS 1
//题目：将一个数组逆序输出
#include<stdio.h>


int main()
{
	int k;
	int a[] = { 0,1,2,3,4,5,6,7,8,9 };
	for (int j = 0; j < sizeof(a) / sizeof(a[0]) / 2 - 1; j++)
	{
		k = a[j];
		a[j] = a[sizeof(a) / sizeof(a[0]) - 1 - j];
		a[sizeof(a) / sizeof(a[0]) - 1 - j] = k;
	}
	for (int i = 0; i < sizeof(a) / sizeof(a[0]) ; i++)
	{
		printf("%d ", a[i]);
	}


return 0;
}
//int main()
//{
//	int a[] = { 0,1,2,3,4,5,6,7,8,9 };
//	for (int i = sizeof(a) / sizeof(a[0]) - 1; i >= 0; i--)
//	{
//		printf("%d ", a[i]);
//	}
//
//
//	return 0;
//}
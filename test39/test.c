#define _CRT_SECURE_NO_WARNINGS 1
//题目：有一个已经排好序的数组。现输入一个数，要求按原来的规律将它插入数组中。
#include<stdio.h>

//
int main()
{
	int k,b;
	int a[11] = { 1,4,6,9,13,16,19,28,40,100 };
	scanf("%d", &a[10]);
	//a[10] = 10;
	for (int i = 0; i < 10; i++)
	{
		if (a[10] < a[i])
		{
			k = a[10];
			for (b = 10; b > i; b--)
			{
				a[b] = a[b - 1];
			}
			a[i] = k;
			break;
		}
	}
	for (int i = 0; i < 11; i++)
	{
		printf("%d ", a[i]);
	}
return 0;
}


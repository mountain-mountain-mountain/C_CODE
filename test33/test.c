#define _CRT_SECURE_NO_WARNINGS 1
//题目：判断一个数字是否为质数。
#include<stdio.h>


int main()
{
	int m = 0;
	int i;
	printf("请输入一个大于1的整数：\n");
	scanf("%d", &i);
	for (int j = 1; j < i; j++)
	{
		if (i % j == 0)
		{
			m=m+1;
		}
	}
	if (m > 1)
	{
		printf("%d不是质数\n", i);
	}
	else
	{
		printf("%d是质数\n", i);
	}
return 0;
}

//#include<math.h>
//int zhisu(int i)
//{
//	for (int j = 2; j < (int)sqrt((double)i); j++)
//	{
//		if (i % j == 0)
//		{
//			return 0;
//		}
//	}
//	return 1;
//}
//int main()
//{
//	int zhisu(int);
//	int a;
//	printf("请输入一个大于1的整数：\n");
//	scanf("%d", &a);
//	if (zhisu(a) == 0)
//	{
//		printf("不是质数\n");
//	}
//	else
//	{
//		printf("是质数\n");
//	}
//	return 0;
//}

#define _CRT_SECURE_NO_WARNINGS 1
//有1、2、3、4个数字，能组成多少个互不相同且无重复数字的三位数？都是多少？
#include <stdio.h>;

//int main()
//{
//	int a, b, c;
//	for (a = 1; a < 5; a++)
//	{
//		for (b = 1; b < 5; b++)
//		{
//			for (c = 1; c < 5; c++)
//			{
//				if (a != b && a != c && b != c)
//					printf("%d,%d,%d\n",a, b, c);
//			}
//		}
//	}
//}
int main()
{
	int day;
	int sum = 0;
	scanf("%d\n", &day);

	printf("day=%d\n", day);

	sum = day + 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30;
	printf("这是这一年的第 %d 天。", sum);







}
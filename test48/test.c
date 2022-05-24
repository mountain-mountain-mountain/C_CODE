#define _CRT_SECURE_NO_WARNINGS 1
//题目：宏#define命令练习3。
#include<stdio.h>
#define LAG >
#define sma <
#define eq ==

int main()
{
	int i, j;
	printf("请输入两个整数；\n");
	scanf("%d %d", &i, &j);
	if (i LAG j)
	{
		printf("i大于j\n");
	}
	else if (i sma j)
	{
		printf("i小于j\n");
	}
	else 
	{
		printf("i等于j\n");
	}
return 0;
}
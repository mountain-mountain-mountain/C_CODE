#define _CRT_SECURE_NO_WARNINGS 1
//��Ŀ����#define������ϰ3��
#include<stdio.h>
#define LAG >
#define sma <
#define eq ==

int main()
{
	int i, j;
	printf("����������������\n");
	scanf("%d %d", &i, &j);
	if (i LAG j)
	{
		printf("i����j\n");
	}
	else if (i sma j)
	{
		printf("iС��j\n");
	}
	else 
	{
		printf("i����j\n");
	}
return 0;
}
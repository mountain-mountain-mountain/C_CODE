#define _CRT_SECURE_NO_WARNINGS 1
//题目：学习使用auto定义变量的用法。
#include<stdio.h>


int main()
{
	for (int i = 0; i < 10; i++)
	{
		printf("%d\n", i);
		{
			auto i = 1;
			printf("auto i=%d\n", i);
		}
	}


return 0;
}
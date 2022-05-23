#define _CRT_SECURE_NO_WARNINGS 1
//题目：学习使用static的另一用法。
#include<stdio.h>


int main()
{
	for (int i = 0; i < 10; i++)
	{
		printf("%d\n", i);
		{
			static int i = 3;
			printf("static变量为%d\n", i);
			i++;
		}
	}

return 0;
}
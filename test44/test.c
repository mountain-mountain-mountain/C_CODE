#define _CRT_SECURE_NO_WARNINGS 1
//题目：学习使用如何调用外部函数。
#include<stdio.h>

void sell(int i)
{
	i--;
}
int main()
{
	int j = 10;
	for (j = 10; j > 0; j--)
	{
		sell(j);
		printf("剩余票数%d\n", j);
	}

return 0;
}
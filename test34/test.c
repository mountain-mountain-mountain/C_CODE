#define _CRT_SECURE_NO_WARNINGS 1
//题目：练习函数调用。
#include<stdio.h>

void hello(void)
{
	printf("hello world\n");
}
void four_hello(void)
{
	for (int i = 0; i < 4; i++)
	{
		hello();
	}
}

int main()
{
	four_hello();


return 0;
}
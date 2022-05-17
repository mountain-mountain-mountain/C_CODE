#define _CRT_SECURE_NO_WARNINGS 1
//题目：利用递归函数调用方式，将所输入的5个字符，以相反顺序打印出来。
#include<stdio.h>

void f(int n)
{
	char c;
	if (n == 1)
	{
		c = getchar();
		putchar(c);
	}
	else
	{
		c = getchar();
		f(n - 1);
		putchar(c);
	}
}






int main()
{
	int i = 5;
	f(i);


return 0;
}
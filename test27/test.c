#define _CRT_SECURE_NO_WARNINGS 1
//��Ŀ�����õݹ麯�����÷�ʽ�����������5���ַ������෴˳���ӡ������
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
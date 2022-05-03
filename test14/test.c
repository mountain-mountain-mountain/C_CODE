#define _CRT_SECURE_NO_WARNINGS 1
//题目：将一个正整数分解质因数。例如：输入90, 打印出90 = 2 * 3 * 3 * 5。
#include<stdio.h>


int main()
{
	int a, b;
	scanf("%d", &a);
	printf("%d=", a);
	for (b = 2;b <= a; b++)
	{
		if (a % b == 0)
		{
			printf("%d", b);
			
		}
		if (a / b > 1)
		{
			printf("*");
		    a = a / b;
		    b = 2;
		}
	}

return 0;
}
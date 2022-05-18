#define _CRT_SECURE_NO_WARNINGS 1
//题目：一个5位数，判断它是不是回文数。即12321是回文数，个位与万位相同，十位与千位相同。
#include<stdio.h>
#include<string.h>

int main()
{
	 char a[6];
	printf("输入一个五位数：");
	scanf("%s", a);
	if (a[0] == a[4] && a[1] == a[3])
	{
		printf("是回文数\n");
	}
	else
	{
		printf("不是回文数\n");
	}

return 0;
}



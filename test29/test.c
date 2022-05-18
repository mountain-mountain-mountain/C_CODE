#define _CRT_SECURE_NO_WARNINGS 1
//题目：给一个不多于5位的正整数，要求：一、求它是几位数，二、逆序打印出各位数字。
#include<stdio.h>
#include<string.h>

static char a[6];
void f(int n)
{
    while (n > 0)
    {
        printf("%c", a[--n]);
    }
}
int main()
{
	printf("请输入整数：");
	scanf("%s", &a);
	printf("这是一个%lu 位数\n", strlen(a));
	f(strlen(a));



return 0;
}



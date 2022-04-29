#define _CRT_SECURE_NO_WARNINGS 1
//题目：用* 号输出字母C的图案。
#include<stdio.h>


int main()
{
	for (int b = 0; b < 5; b++)
	{
		printf("*", b);
	}
	printf("*\n"); 
	printf("*\n"); 
	printf("*\n");
	printf("*\n");
	for (int b = 0; b < 5; b++)
	{
		printf("*", b);
	}
return 0;
}
#define _CRT_SECURE_NO_WARNINGS 1
//题目：有 n个整数，使其前面各数顺序向后移 m 个位置，最后m个数变成最前面的 m 个数。
#include<stdio.h>


int main()
{
	//int a[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int a[10];
	int n = sizeof(a) / 4;
	int* p;
	int ch=0,b,k=0;
	printf("请输入一组整数：\n");
	while (ch != '\n')
	{
		scanf("%d", &a[k++]);
		ch = getchar();
	}
	printf("请输入向后移动几位：");
	scanf("%d", &b);
	for (int i = 1; i <= b; i++)
	{
		p = a + n - 1;
		int temp;
		temp = *p;
		for (p = a + n - 1; p > a; p--)
		{
			*p = *(p - 1);
		}
		*p = temp;
	}
	for (p = a; p < a + n; p++)
	{
		printf("%5d", *p);
	}
return 0;
}
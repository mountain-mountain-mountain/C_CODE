#define _CRT_SECURE_NO_WARNINGS 1
//题目：求一个3 * 3矩阵对角线元素之和
#include<stdio.h>


int main()
{
	int sum = 0;
	//int a[3][3] = { 1,2,3,4,5,6,7,8,9 };
	int a[3][3];
	printf("请输入矩阵3x3：\n");
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			scanf("%d", &a[i][j]);
		}
	}
	for (int i = 0; i < 3; i++)
	{
		sum += a[i][i];
	}
	printf("斜对角线之和为%d\n", sum);

return 0;
}
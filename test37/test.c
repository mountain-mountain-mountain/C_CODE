#define _CRT_SECURE_NO_WARNINGS 1
//题目：对10个数进行排序。
#include<stdio.h>
#define N 11
//冒泡排序
//int main()
//{
//	int arr[N], i, j, k;
//	printf("请输入10个整数；\n");
//	for (int m = 0; m < 10; m++)
//	{
//		scanf("%d", &arr[m]);
//	}
//	for (i = 0; i < N - 1; i++)
//	{
//		for (j = 0; j < N - 1 - i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				k = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = k;
//			}
//		}
//	}
//	printf("从小到大排序：\n");
//	for (int m = 0; m < 10; m++)
//	{
//		printf("%d ", arr[m]);
//	}
//return 0;
//}

//选择排序

int main()
{
	int arr[N], i,j, k;
	printf("请输入10个整数；\n");
	/*int arr[N]= {0, 4, 2, 8, 6, 1, 5, 9, 3, 7 };*/
	for (int m = 0; m < 10; m++)
	{
		scanf("%d", &arr[m]);
	}
	for (i = 0; i < N - 1; i++)
	{
		for (j = i+1; j < N - 1; j++)
		{
			if (arr[i] > arr[j])
			{
				k = arr[i];
				arr[i] = arr[j];
				arr[j] = k;
			}
		}
		
		
	}
		printf("从小到大排序：\n");
	for (int m = 0; m < 10; m++)
	{
		printf("%d\t ", arr[m]);
	}


	return 0;
}
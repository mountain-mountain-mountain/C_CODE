#define _CRT_SECURE_NO_WARNINGS 1
//��Ŀ����10������������
#include<stdio.h>
#define N 11
//ð������
//int main()
//{
//	int arr[N], i, j, k;
//	printf("������10��������\n");
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
//	printf("��С��������\n");
//	for (int m = 0; m < 10; m++)
//	{
//		printf("%d ", arr[m]);
//	}
//return 0;
//}

//ѡ������

int main()
{
	int arr[N], i,j, k;
	printf("������10��������\n");
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
		printf("��С��������\n");
	for (int m = 0; m < 10; m++)
	{
		printf("%d\t ", arr[m]);
	}


	return 0;
}
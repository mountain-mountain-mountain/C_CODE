#define _CRT_SECURE_NO_WARNINGS 1
//��Ŀ����һ��3 * 3����Խ���Ԫ��֮��
#include<stdio.h>


int main()
{
	int sum = 0;
	//int a[3][3] = { 1,2,3,4,5,6,7,8,9 };
	int a[3][3];
	printf("���������3x3��\n");
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
	printf("б�Խ���֮��Ϊ%d\n", sum);

return 0;
}
#define _CRT_SECURE_NO_WARNINGS 1
//��Ŀ���ж�һ�������Ƿ�Ϊ������
#include<stdio.h>


int main()
{
	int m = 0;
	int i;
	printf("������һ������1��������\n");
	scanf("%d", &i);
	for (int j = 1; j < i; j++)
	{
		if (i % j == 0)
		{
			m=m+1;
		}
	}
	if (m > 1)
	{
		printf("%d��������\n", i);
	}
	else
	{
		printf("%d������\n", i);
	}
return 0;
}

//#include<math.h>
//int zhisu(int i)
//{
//	for (int j = 2; j < (int)sqrt((double)i); j++)
//	{
//		if (i % j == 0)
//		{
//			return 0;
//		}
//	}
//	return 1;
//}
//int main()
//{
//	int zhisu(int);
//	int a;
//	printf("������һ������1��������\n");
//	scanf("%d", &a);
//	if (zhisu(a) == 0)
//	{
//		printf("��������\n");
//	}
//	else
//	{
//		printf("������\n");
//	}
//	return 0;
//}

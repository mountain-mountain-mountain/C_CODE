#define _CRT_SECURE_NO_WARNINGS 1
//��Ŀ���������飬�������һ��Ԫ�ؽ�������С�������һ��Ԫ�ؽ�����������顣
#include<stdio.h>
void jh(int b[])
{
	int max, min;
	for (int j = 1; j < 5; j++)
	{
		if (b[0] > b[j])
		{
			max = b[0];
		}
		else
		{
			int t;
			max = b[j];
			t = b[0];
			b[0] = max;
			b[j] = t;
		}
		if (b[4] < b[j])
		{
			min = b[4];
		}
		else
		{
			int t;
			min = b[j];
			t = b[4];
			b[4] = min;
			b[j] = t;
		}
	}
	
}

int main()
{
	int a[5];
	int* p;
	printf("�������������:\n");
	for (int i = 0; i < 5; i++) 
	{
		scanf("%d", &a[i]);
	}
	jh(a);
	for (p = a; p < a + 5; p++)    //pָ�����
	{
		printf("%-5d", *p);
	}


return 0;
}
#define _CRT_SECURE_NO_WARNINGS 1


//��Ŀ��һ��������������100����һ����ȫƽ�������ټ���168����һ����ȫƽ���������ʸ����Ƕ��٣�



#include<stdio.h>

int main()
{
	int x, m, n, i, j;
	for (i = 1; i < 168 / 2 + 1; i++)
	{
		if (168% i == 0)
		{
			j = 168 / i;
			if (i > j && (i + j) % 2 == 0 && (i - j) % 2 == 0)
			{
				m = (i + j) / 2;
				n = (i - j) / 2;
				x = n * n - 100;
				printf("x = %d\n",x);
			}
		}
	}

	return 0;
}

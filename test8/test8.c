#define _CRT_SECURE_NO_WARNINGS 1
//��Ŀ�����9 * 9�ھ���
#include<stdio.h>


int main()
{
	int a, b, result;
	for (a = 1; a < 10; a++)
	{
		for (b = 1; b <= a; b++)
		{
			result = a * b;
			printf("%d*%d=%-5d", a, b, result);

		}
		printf("\n");
	}


return 0;
}
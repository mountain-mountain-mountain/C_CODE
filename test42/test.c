#define _CRT_SECURE_NO_WARNINGS 1
//��Ŀ��ѧϰʹ��auto����������÷���
#include<stdio.h>


int main()
{
	for (int i = 0; i < 10; i++)
	{
		printf("%d\n", i);
		{
			auto i = 1;
			printf("auto i=%d\n", i);
		}
	}


return 0;
}
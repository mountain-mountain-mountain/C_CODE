#define _CRT_SECURE_NO_WARNINGS 1
//��Ŀ��ѧϰʹ��static����һ�÷���
#include<stdio.h>


int main()
{
	for (int i = 0; i < 10; i++)
	{
		printf("%d\n", i);
		{
			static int i = 3;
			printf("static����Ϊ%d\n", i);
			i++;
		}
	}

return 0;
}
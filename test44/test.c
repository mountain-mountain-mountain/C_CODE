#define _CRT_SECURE_NO_WARNINGS 1
//��Ŀ��ѧϰʹ����ε����ⲿ������
#include<stdio.h>

void sell(int i)
{
	i--;
}
int main()
{
	int j = 10;
	for (j = 10; j > 0; j--)
	{
		sell(j);
		printf("ʣ��Ʊ��%d\n", j);
	}

return 0;
}
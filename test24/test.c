#define _CRT_SECURE_NO_WARNINGS 1
//��Ŀ����һ�������У�2 / 1��3 / 2��5 / 3��8 / 5��13 / 8��21 / 13...���������е�ǰ20��֮�͡�
#include<stdio.h>


int main()
{
	int c;
	float a = 2, b = 1;
	float sum = 0;
	for (int i = 1; i < 21; i++)
	{
		sum = sum + a / b;
		c = a;
		a = a + b;
		b = c;
	}
	printf("sum=%f\n", sum);
return 0;
}
#define _CRT_SECURE_NO_WARNINGS 1
//��Ŀ����ӡ������ͼ�������Σ���Ŀ����ӡ������ͼ�������Σ���

 /**
  ***
 *****
*******
 *****
  ***
   **/
#include<stdio.h>


int main()
{
	int i, j;//�С���
	for (i = 0; i < 4; i++)
	{
		for (j = 0; j < 3 - i;j++)
		{
			printf(" ");
		}
		for (j = 0; j < 2 * i +1; j++)
		{
			printf("*");
			}
		printf("\n");
	}
	for (i = 2; i > -1; i--)
	{
		for (j = 0; j < 3 - i; j++)
		{
			printf(" ");
		}
		for (j = 0; j < 2 * i + 1; j++)
		{
			printf("*");
		}
		printf("\n");
	}






return 0;
}
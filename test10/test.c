#define _CRT_SECURE_NO_WARNINGS 1
//题目：打印楼梯，同时在楼梯上方打印两个笑脸。
#include<stdio.h>



int main()
{
	printf("◎◎\n"); /*输出两个笑脸*/
	for (int a = 0; a < 10; a++)
	{
		for (int b = 0; b < a + 1; b++)
		{
			printf("■");
         }
		printf("\n");
	}
	
return 0;
}
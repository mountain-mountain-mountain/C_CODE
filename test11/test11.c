#define _CRT_SECURE_NO_WARNINGS 1
//题目：古典问题（兔子生崽）：有一对兔子，从出生后第3个月起每个月都生一对兔子，
//小兔子长到第三个月后每个月又生一对兔子，假如兔子都不死，问每个月的兔子总数为多少？（输出前40个月即可）

//程序分析：兔子的规律为数列1, 1, 2, 3, 5, 8, 13, 21....，即下个月是上两个月之和（从第三个月开始）。
#include<stdio.h>


int main()
{
	int a = 1;
	int b = 1;
	printf("month\t  number\n");
	for (int c = 1; c <= 20; c++)
	{
		
		printf("%d,%12d\n", a, b);
		a = a + b;
		b = b + a;

	}

return 0;
}




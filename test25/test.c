#define _CRT_SECURE_NO_WARNINGS 1
//题目：求1 + 2!+ 3!+ ... + 20!的和。
#include<stdio.h>


int main()
{
	int i;
	long double a, sum;
	 a = 1;
	sum = 0;
	for (i = 1; i < 21; i++)
	{
		
			a = a * i;
		sum = sum + a;
	}
	printf("sum=%Lf\n", sum);

return 0;
}




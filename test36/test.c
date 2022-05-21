#define _CRT_SECURE_NO_WARNINGS 1
//求100之内的素数。
#include<stdio.h>
#include<math.h>


int main()
{
	int m = 0;
	for (int i=1;i<101;i++)
	{
		for (int j = 1; j < (int)sqrt(i); j++)
		{
			if (i % j == 0)
			{
				m = m + 1;
			}
			
		}
		if (m == 1)
		{
			printf("%d\n", i);
			
		}
		m = 0;
	}


return 0;
}
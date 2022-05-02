#define _CRT_SECURE_NO_WARNINGS 1
//题目：判断 101 到 200 之间的素数。
//在一般领域，对正整数n，如果用2到根号n之间的所有整数去除，均无法整除，则n为质数。
//质数大于等于2 不能被它本身和1以外的数整除
#include<stdio.h>
#include<math.h>

int main()
{
	int a, b, n;
	for ( n = 101; n < 201; n++)
	{
		 b = sqrt(n);
		for ( a = 2; a <= b ; a++)
		{
			if (n % a == 0)
				break;
			
		}
		if( a > b)
		printf("%d\n", n);
	}

return 0;
}



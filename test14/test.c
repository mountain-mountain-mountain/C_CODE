#define _CRT_SECURE_NO_WARNINGS 1
//��Ŀ����һ���������ֽ������������磺����90, ��ӡ��90 = 2 * 3 * 3 * 5��
#include<stdio.h>


int main()
{
	int a, b;
	scanf("%d", &a);
	printf("%d=", a);
	for (b = 2;b <= a; b++)
	{
		if (a % b == 0)
		{
			printf("%d", b);
			
		}
		if (a / b > 1)
		{
			printf("*");
		    a = a / b;
		    b = 2;
		}
	}

return 0;
}
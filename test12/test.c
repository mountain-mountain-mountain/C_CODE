#define _CRT_SECURE_NO_WARNINGS 1
//��Ŀ���ж� 101 �� 200 ֮���������
//��һ�����򣬶�������n�������2������n֮�����������ȥ�������޷���������nΪ������
//�������ڵ���2 ���ܱ��������1�����������
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



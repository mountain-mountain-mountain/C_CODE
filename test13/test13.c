#define _CRT_SECURE_NO_WARNINGS 1
//��Ŀ����ӡ�����е�"ˮ�ɻ���"����ν"ˮ�ɻ���"��ָһ����λ�������λ���������͵��ڸ��� ����
//���磺153��һ��"ˮ�ɻ���"����Ϊ153 = 1�����η���5�����η���3�����η���
#include<stdio.h>


int main()
{
	int a, b, c, d;
	
	for (a = 1; a < 10; a++)
	{
		for (b = 0; b < 10; b++)
		{
			for (c = 0; c < 10; c++)
			{
				d = a * 100 + b * 10 + c;
				if (d == a * a * a + b * b * b + c * c * c)
					printf("%d\n", d);
			}
		}
	}


return 0;
}

//int main()
//{
//	int i, x, y, z;
//	for (i = 100; i < 1000; i++)
//	{
//		x = i % 10;
//		y = i / 10 % 10;
//		z = i / 100 % 10;
//
//		if (i == (x * x * x + y * y * y + z * z * z))
//			printf("%d\n", i);
//
//	}
//	return 0;
//}

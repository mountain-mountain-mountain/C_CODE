#define _CRT_SECURE_NO_WARNINGS 1
//��Ŀ��ѧϰʹ�ð�λ�� | ��
//
//���������0 | 0 = 0; 0 | 1 = 1; 1 | 0 = 1; 1 | 1 = 1 ��
#include<stdio.h>
int f(int dec)
{
	int result = 0, temp = 1, yushu = 0;
	while (1)
	{
		yushu = dec % 2;
		dec /= 2;
		result += yushu * temp;
		temp *= 10;
		if (dec < 2)
		{
			result += dec * temp;
			break;
		}
	}
	return result;
}
int main()
{
	int a = 2, b = 3, c;
	c = a | b;
	printf("%d�Ķ�����Ϊ%d\n", a, f(a));
	printf("%d�Ķ�����Ϊ%d\n", b, f(b));
	printf("%d�Ķ�����Ϊ%d\n", c, f(c));
	return 0;
}
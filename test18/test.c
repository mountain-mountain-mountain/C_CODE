#define _CRT_SECURE_NO_WARNINGS 1
//��Ŀ����s = a + aa + aaa + aaaa + aa...a��ֵ������a��һ�����֡�
//����2 + 22 + 222 + 2222 + 22222(��ʱ����5�������)������������м��̿��ơ�
#include<stdio.h>


int main()
{
	int s = 0;
	int  a, n, t;
	scanf("%d%d", &a, &n);
	t = a;
	while (n > 0)
	{
		s += t;
		a = a * 10;
		t += a;
		n--;
	}
	printf("s=a+aa+aaa+...=%d\n", s);
return 0;
}
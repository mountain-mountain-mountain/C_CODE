#define _CRT_SECURE_NO_WARNINGS 1
//��Ŀ���� n��������ʹ��ǰ�����˳������� m ��λ�ã����m���������ǰ��� m ������
#include<stdio.h>


int main()
{
	//int a[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int a[10];
	int n = sizeof(a) / 4;
	int* p;
	int ch=0,b,k=0;
	printf("������һ��������\n");
	while (ch != '\n')
	{
		scanf("%d", &a[k++]);
		ch = getchar();
	}
	printf("����������ƶ���λ��");
	scanf("%d", &b);
	for (int i = 1; i <= b; i++)
	{
		p = a + n - 1;
		int temp;
		temp = *p;
		for (p = a + n - 1; p > a; p--)
		{
			*p = *(p - 1);
		}
		*p = temp;
	}
	for (p = a; p < a + n; p++)
	{
		printf("%5d", *p);
	}
return 0;
}
#define _CRT_SECURE_NO_WARNINGS 1
//��Ŀ��һ��5λ�����ж����ǲ��ǻ���������12321�ǻ���������λ����λ��ͬ��ʮλ��ǧλ��ͬ��
#include<stdio.h>
#include<string.h>

int main()
{
	 char a[6];
	printf("����һ����λ����");
	scanf("%s", a);
	if (a[0] == a[4] && a[1] == a[3])
	{
		printf("�ǻ�����\n");
	}
	else
	{
		printf("���ǻ�����\n");
	}

return 0;
}



#define _CRT_SECURE_NO_WARNINGS 1
//��Ŀ�����������ڼ��ĵ�һ����ĸ���ж�һ�������ڼ��������һ����ĸһ����������жϵڶ�����ĸ��
//monday,tuesday,wednesday,thursday,friday,saturday,sunday
#include<stdio.h>


int main()
{
	char i;
	char j;
	printf("������һ���ַ�\n");
	i = getchar();
	getchar();
	switch (i)
	{
	case 'm':
		printf("monday\n");
		break;
	case 'w':
		printf("wednesday\n");
		break;
	case 'f':
		printf("friday\n");
		break;
	case 't':
		printf("��������һ���ַ�\n");
		j = getchar();
		if (j == 'u')
		{
			printf("tuesday\n");
			break;
		}
		if(j=='h')
		{
			printf("thursday\n");
			break;
		}
	case 's':
		printf("��������һ���ַ�:\n");
		j = getchar();
		if (j == 'a')
		{
			printf("saturday\n");
			break;
		}
		if (j == 'u')
		{
			printf("sunday\n");
			break;
		}

	default:
		printf("error");
		break;
	}


return 0;
}
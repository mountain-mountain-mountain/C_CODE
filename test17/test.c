#define _CRT_SECURE_NO_WARNINGS 1
//����һ���ַ����ֱ�ͳ�Ƴ�����Ӣ����ĸ���ո����ֺ������ַ��ĸ�����
#include<stdio.h>


int main()
{
	int number = 0;
	int letter = 0;
	int space = 0;
	int other = 0;
	char a;
	printf("�����룺\n");
	while ((a= getchar()) != '\n')
	{
		if ((a >= 'a' && a <= 'z')||(a >= 'A' && a <= 'Z'))
		{
			letter++;
		}
		 else if (a >= '0' && a <= '9')
		{
			number++;
		}
		 else if(a==' ')
		{
			space++;
		}
		 else
		{
			other++;
		}
		
	}
	printf("��ĸ=%d,����=%d,�ո�=%d,����=%d\n", letter, number, space,other);

return 0;
}
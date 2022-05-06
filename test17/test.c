#define _CRT_SECURE_NO_WARNINGS 1
//输入一行字符，分别统计出其中英文字母、空格、数字和其它字符的个数。
#include<stdio.h>


int main()
{
	int number = 0;
	int letter = 0;
	int space = 0;
	int other = 0;
	char a;
	printf("请输入：\n");
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
	printf("字母=%d,数字=%d,空格=%d,其他=%d\n", letter, number, space,other);

return 0;
}
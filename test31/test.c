#define _CRT_SECURE_NO_WARNINGS 1
//题目：请输入星期几的第一个字母来判断一下是星期几，如果第一个字母一样，则继续判断第二个字母。
//monday,tuesday,wednesday,thursday,friday,saturday,sunday
#include<stdio.h>


int main()
{
	char i;
	char j;
	printf("请输入一个字符\n");
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
		printf("请输入下一个字符\n");
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
		printf("请输入下一个字符:\n");
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
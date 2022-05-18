#define _CRT_SECURE_NO_WARNINGS 1
//题目：删除一个字符串中的指定字母，如：字符串 "aca"，删除其中的 a 字母。
#include<stdio.h>
#include<string.h>

int main()
{
	char str[100];
	char s;
	printf("请输入字符串\n");
	scanf("%s", &str);
	getchar();/*吃掉回车*/
	printf("请输入要删除的字母\n");
	scanf("%c", &s);
	for (int i = 0; i < strlen(str); i++)
	{
		if (s == str[i])
		{
			for (int j = i; j < strlen(str); j++)
			{
				str[j] = str[j + 1];
			}
		}
	}
	printf("%s\n", str);
return 0;
}

//int main()
//{
//    char zifu[1000];
//    const char del[1000];
//    char* rat;
//    printf("请输入一串字符\n");
//    scanf("%s", &zifu);
//    printf("请输入你想删除字符\n");
//    scanf("%s", &del);
//    printf("已删除：%s\n", del);
//    rat = strtok(zifu, del);/*strtok()用来将字符串分割成一个个片段，
//                          当strtok()在参数s的字符串中发现参数del中包含的分割字符时,
//                          则会将该字符改为\0 字符*/
//    printf("%s", rat);
//    rat = strtok(NULL, del);/*原字符串变为分割完成之后的第一个字符串，
//                            剩余的字符串存储在一个静态变量中*/
//    printf("%s\n", rat);
//    return 0;
//}


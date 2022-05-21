#define _CRT_SECURE_NO_WARNINGS 1
//题目：字符串反转，如将字符串 "www.runoob.com" 反转为 "moc.boonur.www"
#include<stdio.h>
#include<string.h>

int main()
{
	int k=0;
	char i[1000]= { 0 };
	char str[1000];
	printf("请输入字符串：\n");
	scanf("%s", str);
	for (int j = strlen(str)-1; j >= 0; j--)//a[5]为0-4；
	{
		i[k] = str[j];
		k++;
	}
	printf("%s\n", i);
return 0;
}
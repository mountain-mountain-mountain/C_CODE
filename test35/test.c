#define _CRT_SECURE_NO_WARNINGS 1
//��Ŀ���ַ�����ת���罫�ַ��� "www.runoob.com" ��תΪ "moc.boonur.www"
#include<stdio.h>
#include<string.h>

int main()
{
	int k=0;
	char i[1000]= { 0 };
	char str[1000];
	printf("�������ַ�����\n");
	scanf("%s", str);
	for (int j = strlen(str)-1; j >= 0; j--)//a[5]Ϊ0-4��
	{
		i[k] = str[j];
		k++;
	}
	printf("%s\n", i);
return 0;
}
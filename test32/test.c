#define _CRT_SECURE_NO_WARNINGS 1
//��Ŀ��ɾ��һ���ַ����е�ָ����ĸ���磺�ַ��� "aca"��ɾ�����е� a ��ĸ��
#include<stdio.h>
#include<string.h>

int main()
{
	char str[100];
	char s;
	printf("�������ַ���\n");
	scanf("%s", &str);
	getchar();/*�Ե��س�*/
	printf("������Ҫɾ������ĸ\n");
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
//    printf("������һ���ַ�\n");
//    scanf("%s", &zifu);
//    printf("����������ɾ���ַ�\n");
//    scanf("%s", &del);
//    printf("��ɾ����%s\n", del);
//    rat = strtok(zifu, del);/*strtok()�������ַ����ָ��һ����Ƭ�Σ�
//                          ��strtok()�ڲ���s���ַ����з��ֲ���del�а����ķָ��ַ�ʱ,
//                          ��Ὣ���ַ���Ϊ\0 �ַ�*/
//    printf("%s", rat);
//    rat = strtok(NULL, del);/*ԭ�ַ�����Ϊ�ָ����֮��ĵ�һ���ַ�����
//                            ʣ����ַ����洢��һ����̬������*/
//    printf("%s\n", rat);
//    return 0;
//}


#define _CRT_SECURE_NO_WARNINGS 1
//��Ŀ����һ��������5λ����������Ҫ��һ�������Ǽ�λ�������������ӡ����λ���֡�
#include<stdio.h>


static char a[5];
void f(int n)
{
    while (n > 0)
    {
        printf("%c", a[--n]);
    }
}
int main()
{
	printf("������������");
	scanf("%s", a);
	printf("����һ��%lu λ��\n", strlen(a));
	f(strlen(a));



return 0;
}



#define _CRT_SECURE_NO_WARNINGS 1
//��Ŀ��ѧϰʹ��register��������ķ�����
//register �洢�����ڶ���洢�ڼĴ����ж����� RAM �еľֲ�������
//����ζ�ű��������ߴ���ڼĴ����Ĵ�С��ͨ����һ���֣���
//�Ҳ��ܶ���Ӧ��һԪ�� '&' ���������Ϊ��û���ڴ�λ�ã���

#include<stdio.h>



int main()
{
    register int i;
    for (i = 1; i <= 10; i++)
    printf("�ܺ�Ϊ %d\n", i);
    return 0;
}
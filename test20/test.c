#define _CRT_SECURE_NO_WARNINGS 1
//��Ŀ��һ���100�׸߶��������£�ÿ����غ�����ԭ�߶ȵ�һ�룻
//�����£������ڵ�10�����ʱ�������������ף���10�η�����ߣ�


#include<stdio.h>

 
int main()
{
	float s = 0;
	float h = 100;
	for (int i = 1; i <= 10; i++)
	{
		s = s + h;//�½�
		h = h / 2;
		s = s + h;//����
	}
	s = s - h;//(��ʮ�����ʱ�������پ���)
	printf("s=%f,h=%f\n", s, h);
return 0;
}
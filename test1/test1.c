#define _CRT_SECURE_NO_WARNINGS 1
//��1��2��3��4�����֣�����ɶ��ٸ�������ͬ�����ظ����ֵ���λ�������Ƕ��٣�
#include <stdio.h>;

//int main()
//{
//	int a, b, c;
//	for (a = 1; a < 5; a++)
//	{
//		for (b = 1; b < 5; b++)
//		{
//			for (c = 1; c < 5; c++)
//			{
//				if (a != b && a != c && b != c)
//					printf("%d,%d,%d\n",a, b, c);
//			}
//		}
//	}
//}
int main()
{
	int day;
	int sum = 0;
	scanf("%d\n", &day);

	printf("day=%d\n", day);

	sum = day + 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30;
	printf("������һ��ĵ� %d �졣", sum);







}
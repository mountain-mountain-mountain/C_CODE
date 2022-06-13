#define _CRT_SECURE_NO_WARNINGS 1
//题目：输入数组，最大的与第一个元素交换，最小的与最后一个元素交换，输出数组。
#include<stdio.h>
//void jh(int b[])
//{
//	int max, min;
//	for (int j = 1; j < 5; j++)
//	{
//		if (b[0] > b[j])
//		{
//			max = b[0];
//		}
//		else
//		{
//			int t;
//			max = b[j];
//			t = b[0];
//			b[0] = max;
//			b[j] = t;
//		}
//		if (b[4] < b[j])
//		{
//			min = b[4];
//		}
//		else
//		{
//			int t;
//			min = b[j];
//			t = b[4];
//			b[4] = min;
//			b[j] = t;
//		}
//	}
//	
//}
//
//int main()
//{
//	int a[5];
//	int* p;
//	printf("请输入五个整数:\n");
//	for (int i = 0; i < 5; i++) 
//	{
//		scanf("%d", &a[i]);
//	}
//	jh(a);
//	for (p = a; p < a + 5; p++)    //p指针变量
//	{
//		printf("%-5d", *p);
//	}
//
//
//return 0;
//}

int main()
{
    int a[5], i, * max, * min, t;

    printf("please input five numbers:\n");
    for (i = 0; i < 5; i++)
    {
        scanf("%d", &a[i]);
    }
    max = min = a;
    for (i = 0; i < 4; i++)
    {
        if (*max > a[i + 1])
        {
            max = &a[i + 1];
        }
        if (*min < a[i + 1])
        {
            min = &a[i + 1];
        }
    }
    printf("%d %d",max, min);
    /*for (i = 0; i < 5; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");*/
}
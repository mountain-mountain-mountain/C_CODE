#define _CRT_SECURE_NO_WARNINGS 1
//��Ŀ��һ�������ǡ�õ�����������֮�ͣ�������ͳ�Ϊ"����"������6 = 1��2��3.����ҳ�1000���ڵ�����������
#include<stdio.h>


int wanshu(int n)
{
	int m;
	int sum = 0;
	for (m = 1; m < n; m++)
	{
		if (n % m == 0)
		{
			sum += m;

		}
	}
	if (n == sum)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

int main()
{
	int a;
	for (a = 1;a <= 1000 ; a++)
	{
		if (wanshu(a)==1)
		{
			printf("%d\n", a);
		}
	}

return 0;
}

//#define MAXNUMBER 1000
//int main()
//{
//    int sum, x, i;
//    for (x = 1; x <= MAXNUMBER; x++) {
//        sum = 0;
//        for (i = 1; i <= x / 2; i++)
//            if (x % i == 0)
//                sum += i;
//        if (sum == x)
//            printf("%d\n", x);
//    }
//    return 0;
//}
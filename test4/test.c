

#define _CRT_SECURE_NO_WARNINGS 1

//��Ŀ������ĳ��ĳ��ĳ�գ��ж���һ������һ��ĵڼ��죿


#include<stdio.h>



int main()
{
	int year, month, day ;
	int sum = 0;

	printf("����������:");
	scanf("%d,%d,%d", &year , &month , &day);
	printf("year=%d,month=%d,day=%d\n", year, month, day);

	switch (month)
	{
	case 1:
		sum = day;
		printf("������һ��ĵ� %d �졣",sum);
		break;
	case 2:
		sum = day+ 31;
		printf("������һ��ĵ� %d �졣",sum);
		break;
	case 3:
		if (year%400==0||(year%4==0&&year%100!=0))
		{
			sum = day+ 31 + 29;
				printf("������һ��ĵ� %d �졣",sum);
		}
		else
		{
			sum = day + 31+28;
			printf("������һ��ĵ� %d �졣",sum);
		}
		break;
	case 4:
		if (year%400==0||(year%4==0&&year%100!=0))
		{
			sum = day + 31 + 29+31;
				printf("������һ��ĵ� %d �졣",sum);
		}
		else
		{
			sum = day + 31 + 28+31;
			printf("������һ��ĵ� %d �졣",sum);
		}
		break;
	case 5:
		if (year%400==0||(year%4==0&&year%100!=0))
		{
			sum = day + 31 + 29 + 31+30;
			printf("������һ��ĵ� %d �졣",sum);
		}
		else
		{
			sum = day + 31 + 28 + 31+30;
			printf("������һ��ĵ� %d �졣",sum);
		}
		break; 
	case 6:
			if (year%400==0||(year%4==0&&year%100!=0))
			{
				sum = day + 31 + 29 + 31 + 30+31;
				printf("������һ��ĵ� %d �졣",sum);
			}
			else
			{
				sum = day + 31 + 28 + 31 + 30+31;
				printf("������һ��ĵ� %d �졣",sum);
			}
			break;
	case 7:
		if (year%400==0||(year%4==0&&year%100!=0))
		{
			sum = day + 31 + 29 + 31 + 30 + 31+30;
			printf("������һ��ĵ� %d �졣",sum);
		}
		else
		{
			sum = day + 31 + 28 + 31 + 30 + 31+30;
			printf("������һ��ĵ� %d �졣",sum);
		}
		break;
	case 8:
		if (year%400==0||(year%4==0&&year%100!=0))
		{
			sum = day + 31 + 29 + 31 + 30 + 31 + 30+31;
			printf("������һ��ĵ� %d �졣",sum);
		}
		else
		{
			sum = day + 31 + 28 + 31 + 30 + 31 + 30+31;
			printf("������һ��ĵ� %d �졣",sum);
		}
		break;
	case 9:
		if (year%400==0||(year%4==0&&year%100!=0))
		{
			sum = day + 31 + 29 + 31 + 30 + 31 + 30 + 31+31;
			printf("������һ��ĵ� %d �졣",sum);
		}
		else
		{
			sum = day + 31 + 28 + 31 + 30 + 31 + 30 + 31+31;
			printf("������һ��ĵ� %d �졣",sum);
		}
		break;
	case 10:
		if (year%400==0||(year%4==0&&year%100!=0))
		{
			sum = day + 31 + 29 + 31 + 30 + 31 + 30 + 31 + 31+30;
			printf("������һ��ĵ� %d �졣",sum);
		}
		else
		{
			sum = day + 31+28+31+30+31+30+31+31+30;
			printf("������һ��ĵ� %d �졣",sum);
		}
		break;
	case 11:
		if (year%400==0||(year%4==0&&year%100!=0))
		{
			sum = day + 31 + 29 + 31 + 30 + 31 + 30 + 31 + 31 + 30+31;
			printf("������һ��ĵ� %d �졣", sum);
		}
		else
		{
			sum = day + 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30+31;
			printf("������һ��ĵ� %d �졣",sum);
		}
		break;
	case 12:
		if (year%400==0||(year%4==0&&year%100!=0))
		{
			sum = day + 31 + 29 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31+30;
			printf("������һ��ĵ� %d �졣", sum);
		}
		else
		{
			sum = day + 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31+30;
			printf("������һ��ĵ� %d �졣",sum);
		}
		break;
	}




	return 0;
}




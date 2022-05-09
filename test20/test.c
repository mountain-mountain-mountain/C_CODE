#define _CRT_SECURE_NO_WARNINGS 1
//题目：一球从100米高度自由落下，每次落地后反跳回原高度的一半；
//再落下，求它在第10次落地时，共经过多少米？第10次反弹多高？


#include<stdio.h>

 
int main()
{
	float s = 0;
	float h = 100;
	for (int i = 1; i <= 10; i++)
	{
		s = s + h;//下降
		h = h / 2;
		s = s + h;//反弹
	}
	s = s - h;//(第十次落地时经过多少距离)
	printf("s=%f,h=%f\n", s, h);
return 0;
}
#define _CRT_SECURE_NO_WARNINGS 1
//ÌâÄ¿£ººê#defineÃüÁîÁ·Ï°2¡£
#include<stdio.h>
#define exchange(a,b) {int t ;t=a;a=b;b=t;}

int main()
{
	int i = 10;
	int j = 30;
	exchange(i, j);
	printf("%d %d\n", i, j);


return 0;
}
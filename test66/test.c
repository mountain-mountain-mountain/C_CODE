#define _CRT_SECURE_NO_WARNINGS 1
//题目：输入3个数a, b, c，按大小顺序输出。
#include<stdio.h>

void jiaohuan(int* i, int* j, int* k)
{
	int max, min, temp;
	max = (*i > *j ? *i : *j) > *k ? (*i > *j ? *i : *j) : *k;
	min = (*i < *j ? *i : *j) < *k ? (*i < *j ? *i : *j) : *k;
	temp = *i + *j + *k - max - min;
	printf("max=%d min=%d temp=%d\n", min, temp, max);
}

int main()
{
	int* a, * b, * c;
	scanf("%d%d%d", &a, &b, &c);
	jiaohuan(&a, &b, &c);

return 0;
}
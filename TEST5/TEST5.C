#define _CRT_SECURE_NO_WARNINGS 1
//题目：输入三个整数x, y, z，请把这三个数由小到大输出。



#include<stdio.h>

int main()
{
	int x, y, z;
	
	scanf("%d,%d,%d", &x, &y, &z);
	int sum = x + y + z;
	//a<b?a:b   a与b谁小，输出小的值
	printf("最小值 %d\n", (x < y ? x : y) < z ? (x < y ? x : y) : z);
	printf("中间值 %d\n", sum - ((x < y ? x : y) < z ? (x < y ? x : y) : z) - ((x > y ? x : y) > z ? (x > y ? x : y) : z));
	printf("最大值 %d\n", (x > y ? x : y) > z ? (x > y ? x : y) : z);


	return 0;
}
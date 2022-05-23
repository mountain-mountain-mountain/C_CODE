#define _CRT_SECURE_NO_WARNINGS 1
//题目：学习static定义静态变量的用法。
#include<stdio.h>
int jishu()
{
	static int num = 10;
	num--;
	printf("%d\n", num);
}
int main()
{
	for (int i = 10; i > 0; i--)
	{
		jishu();
	 }

return 0;
}
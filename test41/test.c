#define _CRT_SECURE_NO_WARNINGS 1
//��Ŀ��ѧϰstatic���徲̬�������÷���
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
#define _CRT_SECURE_NO_WARNINGS 1
//计算机里存负数用补码存
#include<stdio.h>


int main()
{
	int a = 5;                    // a=0000 0101  
	int b = ~a;                  //b=1111 1010反码
	printf("b的值为%d\n", b);   // 负数的补码：取反，加1
								//-1=1111 1001
							  //取反=1000 0110 
	return 0;                      //  b = -6 
}
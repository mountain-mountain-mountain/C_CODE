#define _CRT_SECURE_NO_WARNINGS 1
//�������渺���ò����
#include<stdio.h>


int main()
{
	int a = 5;                    // a=0000 0101  
	int b = ~a;                  //b=1111 1010����
	printf("b��ֵΪ%d\n", b);   // �����Ĳ��룺ȡ������1
								//-1=1111 1001
							  //ȡ��=1000 0110 
	return 0;                      //  b = -6 
}
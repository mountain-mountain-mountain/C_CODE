#define _CRT_SECURE_NO_WARNINGS 1
//题目：要求输出国际象棋棋盘。
#include<stdio.h>
//#include <stdlib.h>
//#include <windows.h>

//int main()
//{
//	SetConsoleOutputCP(437);
//	char a = 176;
//	char b = 219;
//    for (int i = 0; i < 8; i++)
//    {
//        for (int j = 0; j < 8; j++)
//        {
//            if ((i + j) % 2 == 0)
//            {
//                printf("%c",b);
//            }
//            else
//            {
//                printf("%c%c", a, a);
//            }
//        }
//        printf("\n");
//    }
//	
//return 0;
//}

int  main()
{
    int  i, j;
    for (i = 0; i < 8; i++)
    {
        for (j = 0; j < 8; j++)
        {
            if ((i + j) % 2 == 0)
            {
                printf("%c%c", 0xa8, 0x80);
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }
    
    return  0;

}
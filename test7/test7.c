#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>


int main(void)
{
    int i, j;          
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            if (i == j || (i + j + 1) == 5)
                 printf("%c%c", 0xa8, 0x80);
            else
                printf("  ");
        }
        printf("\n");
    }
}

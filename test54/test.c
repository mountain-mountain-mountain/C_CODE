#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
    unsigned a, b, c, d;
    printf("������������\n");
    scanf("%o", &a);
    b = a >> 4;     
    c = ~(~0 << 4);
    d = b & c;     
    printf("%o\n%o\n", a, d);
    printf("%o\n", b);
    printf("%o\n", c);
    
    return 0;
}
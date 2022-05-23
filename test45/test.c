#define _CRT_SECURE_NO_WARNINGS 1
//题目：学习使用register定义变量的方法。
//register 存储类用于定义存储在寄存器中而不是 RAM 中的局部变量。
//这意味着变量的最大尺寸等于寄存器的大小（通常是一个字），
//且不能对它应用一元的 '&' 运算符（因为它没有内存位置）。

#include<stdio.h>



int main()
{
    register int i;
    for (i = 1; i <= 10; i++)
    printf("总和为 %d\n", i);
    return 0;
}
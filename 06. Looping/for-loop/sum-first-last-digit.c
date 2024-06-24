// Write a Program to find the sum of a first and the last digit of a number.
#include "stdio.h"
int main()
{
    int num, lastnum;
    printf("enter any number ");
    scanf("%d", &num);
    lastnum = num % 10;

    for (int i = 0; num > 10; i++)
    {
        num = num / 10;
    }
    printf("the sum of a first and the last digit : %d", num + lastnum);
}
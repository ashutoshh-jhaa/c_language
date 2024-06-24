// Write a Program to count the total number of digits in a number.
#include "stdio.h"
int main()
{
    int num, count = 0;
    printf("enter any number ");
    scanf("%d", &num);

    printf("Total digits : ");
    for (int i = 0; num != 0; i++)
    {
        num = num / 10;
        count++;
    }
    printf("%d", count);
}
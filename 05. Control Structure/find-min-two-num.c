// Write a Program to find the minimum number from the given 2 numbers using if else.
#include "stdio.h"

int main()
{
    int num1, num2;

    printf("Enter first number : ");
    scanf("%d", &num1);
    printf("Enter second number : ");
    scanf("%d", &num2);

    if (num1 < num2)
    {
        printf("%d is smaller number", num1);
    }
    else
    {
        printf("%d is smaller number", num2);
    }
}
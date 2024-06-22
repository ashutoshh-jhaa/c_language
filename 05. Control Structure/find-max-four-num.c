// Write a Program to find the maximum number from the given 4 numbers using nested if else.
#include "stdio.h"

int main()
{
    int num1, num2, num3, num4;

    printf("Enter first number : ");
    scanf("%d", &num1);
    printf("Enter second number : ");
    scanf("%d", &num2);
    printf("Enter third number : ");
    scanf("%d", &num3);
    printf("Enter fourth number : ");
    scanf("%d", &num4);

    if (num1 > num2)
    {
        if (num1 > num3)
        {
            if (num1 > num4)
            {
                printf("%d is biggest", num1);
            }
            else
                printf("%d is biggest", num4);
        }
        else
        {
            if (num3 > num4)
            {
                printf("%d is the biggest", num3);
            }
            else
                printf("%d is the biggest", num4);
        }
    }
    else
    {
        if (num2 > num3)
        {
            if (num2 > num4)
            {
                printf("%d is biggest", num2);
            }
            else
                printf("%d is biggest", num4);
        }
        else
        {
            if (num3 > num4)
            {
                printf("%d is the biggest", num3);
            }
            else
                printf("%d is the biggest", num4);
        }
    }
}
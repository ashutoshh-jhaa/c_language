// Write a Program to find the minimum number from the given 3 numbers using nested if else.
#include "stdio.h"
int main()
{
    int num1, num2, num3;
    printf("Enter first number : ");
    scanf("%d", &num1);
    printf("Enter second number : ");
    scanf("%d", &num2);
    printf("Enter third number : ");
    scanf("%d", &num3);

    if (num1 < num2 && num1 < num3)
    {
        printf("%d is smallest", num1);
    }
    else if (num2 < num1 && num2 < num3)
    {
        printf("%d is smallest", num2);
    }
    else
        printf("%d is smallest", num3);
}
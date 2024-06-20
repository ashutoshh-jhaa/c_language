// Write a Program to check whether a number is even or odd using the ternary operator.
#include "stdio.h"

int main()
{
    int num;
    printf("Enter a number : ");
    scanf("%d", &num);

    (num % 2) == 0 ? printf("Entered number is even") : printf("Entered number is odd");
}
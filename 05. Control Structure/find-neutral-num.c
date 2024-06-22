// Write a Program to find if a given number is neutral or not using a ladder if else.
#include "stdio.h"
int main()
{
    int num;
    printf("Enter a Number : ");
    scanf("%d", &num);

    if (num > 0)
    {
        printf("Your Entered Number is Positive");
    }
    else if (num < 0)
    {
        printf("Your Entered Number is Negative");
    }
    else
        printf("Entered Number is Neutral");
}
// Write a Program to check if a given number is divisible by both 3 & 5 or not using UDF.
#include <stdio.h>

int divisibility(int num)
{
    if (num % 3 == 0 && num % 5 == 0)
    {
        printf("Yes, it is divisible by both");
    }
    else
    {
        printf("Not, it is not divisible by both");
    }
}

int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    divisibility(num);
}

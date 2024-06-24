// Write a Program to print the factorial of number N using for loop.
#include <stdio.h>

int main()
{
    int factorial = 1, num = 0;

    printf("Enter a non-negative integer: ");
    scanf("%d", &num);

    if (num < 0)
    {
        printf("Factorial is not defined for negative numbers.\n");
    }
    else
    {
        for (int i = 1; i <= num; ++i)
        {
            factorial *= i;
        }

        printf("Factorial of %d = %d\n", num, factorial);
    }

    return 0;
}

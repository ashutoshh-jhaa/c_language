// Write a Program to print the sum of all numbers from 1 to N using for loop.
#include "stdio.h"
int main()
{
    int n, sum;
    printf("Enter the value of n : ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        sum += i;
    }
    printf("Sum of n numbers equals : %d", sum);
}
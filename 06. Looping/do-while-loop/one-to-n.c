// Write a Program to print even numbers from 1 to N using a do - while loop.
#include "stdio.h"
int main()
{
    int i = 0, num;
    printf("Enter any number : ");
    scanf("%d", &num);
    do
    {
        printf("%d\n", 2 * i);
        i++;

    } while (i * 2 <= num);
}
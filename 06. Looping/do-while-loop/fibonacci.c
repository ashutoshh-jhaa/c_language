// Write a Program to print the fibonacci series up to N numbers using for loop.
#include "stdio.h"
int main()
{
    int i = 2, n, n1 = 0, n2 = 1, next;
    next = n1 + n2;

    printf("Enter the nth term : ");
    scanf("%d", &n);
    printf("%d\n%d\n", n1, n2);

    do
    {
        printf("%d\n", next);
        n1 = n2;
        n2 = next;
        next = n1 + n2;
        i++;
    } while (i < n);
}
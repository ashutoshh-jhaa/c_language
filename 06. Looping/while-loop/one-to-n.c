// Write a Program to print 1 to N using a while loop.
#include "stdio.h"

int main()
{
    int i = 0;
    int endvar;
    printf("Enter ending int value : ");
    scanf("%d", &endvar);
    // printf("%d", endvar);
    while (i <= endvar)
    {
        printf("%d\n", i);
        i++;
    }
}
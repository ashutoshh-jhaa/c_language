// Write a Program to print 10 to 1 using a while loop.
#include "stdio.h"

int main()
{
    int i = 10;

    while (i <= 10 && i >= 0)
    {
        printf("%d\n", i);
        i = i - 1;
    }
}
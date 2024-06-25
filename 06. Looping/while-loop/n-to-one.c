// Write a Program to print odd numbers from N to 1 using a while loop.
#include "stdio.h"
int main()
{
    int from;
    printf("Enter starting value : ");
    scanf("%d", &from);

    while (from >= 0)
    {
        if ((from % 2) != 0)
        {
            printf("%d\n", from);
        }

        from = from - 1;
    }
}
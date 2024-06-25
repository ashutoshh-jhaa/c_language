// Write a Program to print leap years between two given numbers using a while loop.
#include "stdio.h"
int main()
{
    int start, end;
    printf("Enter start year : ");
    scanf("%d", &start);
    printf("Enter end year : ");
    scanf("%d", &end);

    while (start <= end)
    {
        if (start % 4 == 0)
        {
            printf("%d\n", start);
        }
        start++;
    }
}
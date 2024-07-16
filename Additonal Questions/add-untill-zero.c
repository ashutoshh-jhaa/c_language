/*
take values from the user and add until the user enters 0
*/

#include "stdio.h"
int main()
{
    int num, sum = 0, temp = 1;

    for (int i = 1; i; i++)
    {
        printf("Enter a Number : ");
        scanf("%d", &num);
        if (num != 0)
        {
            sum += num;
        }
        else
        {
            i = -1;
            // break;
        }
    }
    // using while loop

    /*while (temp)
    {
        printf("Enter a Number : ");
        scanf("%d", &num);
        if (num != 0)
        {
            sum += num;
        }
        else
        {
            temp = 0;
            // break;
        }
    }
    printf("Sum %d", sum);*/

    // using do while
    /*do
    {
        printf("Enter a Number : ");
        scanf("%d", &num);
        sum += num;
    } while (num);
    printf("Sum %d", sum);*/
}
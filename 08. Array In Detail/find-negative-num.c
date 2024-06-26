// Write a Program to find all the negative elements from a given 1D array.
#include "stdio.h"
int main()
{
    int n;
    printf("Enter the value of n : ");
    scanf("%d", &n);
    int array[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
    }

    printf("ORIGINAL ARRAY\n");
    for (int i = 0; i < n; i++)
    {
        printf("array[%d] : %d\n", i, array[i]);
    }

    printf("ARRAY WITH NEGATIVE ELEMENTS\n");
    for (int i = 0; i < n; i++)
    {
        array[i] < 0 ? printf("array[%d] : %d\n", i, array[i]) : 0;
    }
}
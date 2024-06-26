// Write a Program to find the length of a 1D array.
#include "stdio.h"
int main()
{
    int n, count = 0;
    printf("Enter the size of array : ");
    scanf("%d", &n);
    int array[n];
    for (int i = 0; i < n; i++)
    {
        printf("Enter array[%d] : ", i);
        scanf("%d", &array[i]);
        count++;
    }
    printf("Length of the array = %d", count);
}
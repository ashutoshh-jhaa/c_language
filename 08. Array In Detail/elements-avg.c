// Write a Program to find the average of a 1D array.
#include "stdio.h"
int main()
{
    int n, count = 0, sum = 0;
    printf("Enter the size of array : ");
    scanf("%d", &n);
    int array[n];
    for (int i = 0; i < n; i++)
    {
        printf("Enter array[%d] : ", i);
        scanf("%d", &array[i]);
        sum += array[i];
        count++;
    }
    printf("Average = %d", sum / count);
}
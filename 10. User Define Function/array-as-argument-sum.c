// Write a Program to find the sum of all 1D Array elements by passing an array as an argument using UDF.
#include "stdio.h"

int fun(int[], int);
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
    printf("Sum equals to : %d", fun(array, n));
}
int fun(int array[], int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += array[i];
    }
    return sum;
}
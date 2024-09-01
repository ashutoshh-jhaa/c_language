// Create an array and initialize it with values, then print the elements of the array.
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

    for (int i = 0; i < n; i++)
    {
        printf("%d\t", array[i]);
    }
}
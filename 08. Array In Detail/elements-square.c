// Write a Program to find square of each element from the given array.
#include "stdio.h"

int main()
{
    int n;
    printf("Enter the size of array : ");
    scanf("%d", &n);

    printf("Enter array a elements\n");
    int a[n];
    for (int i = 0; i < n; i++)
    {
        printf("Enter a[%d] : ", i);
        scanf("%d", &a[i]);
    }
    for (int i = 0; i < n; i++)
    {
        a[i] = a[i] * a[i];
    }
    printf("Square of each elemets of array \n");
    for (int i = 0; i < n; i++)
    {
        printf("a[%d] : %d \n", i, a[i]);
    }
}

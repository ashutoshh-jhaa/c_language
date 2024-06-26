// Write a Program to perform the addition operation of two 1D arrays & store it in another array. Keep in mind that both array sizes must be the same.
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
    int b[n];
    printf("Enter array b elements\n");
    for (int i = 0; i < n; i++)
    {
        printf("Enter b[%d] : ", i);
        scanf("%d", &b[i]);
    }
    printf("Array c elements\n");
    int c[n];
    for (int i = 0; i < n; i++)
    {
        c[i] = a[i] + b[i];
        printf("c[%d] = %d\n", i, c[i]);
    }
}

// Write a Program to perform the merge operation of two 1D arrays & store it in another array. Keep in mind that both array sizes can be different.
#include "stdio.h"
int main()
{
    int n1, n2;

    printf("Enter the size of array1 : ");
    scanf("%d", &n1);

    int a1[n1];

    for (int i = 0; i < n1; i++)
    {
        printf("Enter array[%d] : ", i);
        scanf("%d", &a1[i]);
    }

    printf("Enter the size of array2 : ");
    scanf("%d", &n2);

    int a2[n2];
    for (int i = 0; i < n2; i++)
    {
        printf("Enter array[%d] : ", i);
        scanf("%d", &a2[i]);
    }

    printf("Array : \n");

    int c[n1 + n2];
    for (int i = 0; i < n1; i++)
    {
        c[i] = a1[i];
    }

    for (int i = 0; i < n2; i++)
    {
        c[n1 + i] = a2[i];
    }

    for (int i = 0; i < n1 + n2; i++)
    {
        printf("%d ", c[i]);
    }
}
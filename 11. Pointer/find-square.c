// Write a Program to find the square of each element of a given 1D array using a Pointer.
#include "stdio.h"
int main()
{
    int n;
    printf("Enter the value of n : ");
    scanf("%d", &n);
    int array[n];
    for (int i = 0; i < n; i++)
    {
        printf("array[%d] : ", i);
        scanf("%d", &array[i]);
    }

    int *pointer;
    pointer = &array[0]; // connecting

    printf("Square of elelments : ");
    for (int i = 0; i < n; i++)
    {
        printf("\n%d", (*(pointer + i)) * (*(pointer + i)));
    }
}

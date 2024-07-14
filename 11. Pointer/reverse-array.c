// Write a Program to find the reverse of a 1D array using a Chain of Pointers.
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

    printf("Reverse : \n");
    for (int i = n - 1; i >= 0; i--)
    {
        printf("%d\n", *(pointer + i));
    }
}

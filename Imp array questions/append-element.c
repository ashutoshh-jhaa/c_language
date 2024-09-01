// Add an element to the end of the array
#include "stdio.h"
int main()
{
    int n, value;
    printf("Enter the value of n : ");
    scanf("%d", &n);

    int array[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
    }

    printf("Original Array\n");
    for (int i = 0; i < n; i++)
    {
        printf("array[%d] : %d\n", i, array[i]);
    }

    printf("Enter the value to add : ");
    scanf("%d", &value);

    array[n] = value;

    printf("Array after addition\n");
    for (int i = 0; i < n + 1; i++)
    {
        printf("array[%d] : %d\n", i, array[i]);
    }
}
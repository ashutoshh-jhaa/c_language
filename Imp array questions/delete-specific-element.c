// Delete an element from an array by shifting the remaining elements
#include "stdio.h"
int main()
{
    int n, index, newvalue;

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
        printf("%d\t", array[i]);
    }
    printf("\nEnter the index to delete : ");
    scanf("%d", &index);

    for (int i = index; i < n - 1; i++)
    {
        array[i] = array[i + 1];
    }
    array[n--];

    printf("Array after deletion\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d\t", array[i]);
    }
}
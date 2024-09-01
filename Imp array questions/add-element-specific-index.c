// Add a new element at a specific index in the array
#include "stdio.h"
int main()
{
    int n, index, value;
    printf("Enter the value of n : ");
    scanf("%d", &n);

    int array[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
    }

    printf("Enter the index : ");
    scanf("%d", &index);

    printf("Enter the value : ");
    scanf("%d", &value);

    for (int i = n; i >= index; i--)
    {
        array[i] = array[i - 1];
    }

    array[index] = value;

    for (int i = 0; i < n + 1; i++)
    {
        printf("array[%d] : %d\n", i, array[i]);
    }
}
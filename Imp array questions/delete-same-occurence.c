// Delete all occurrence of a specific element in the array.
#include "stdio.h"

int main()
{
    int n;

    printf("Enter the value of n : ");
    scanf("%d", &n);

    int a[n];
    int newSize = 0;
    int deleteItem;

    printf("Enter elements\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Enter the elements to be deleted: ");
    scanf("%d", &deleteItem);

    for (int i = 0; i < n; i++)
    {
        if (a[i] != deleteItem)
        {
            a[newSize] = a[i];
            newSize++;
        }
    }

    printf("\nAfter deletion \n");
    for (int i = 0; i < newSize; i++)
    {
        printf("a[%d] = %d\n", i, a[i]);
    }
}

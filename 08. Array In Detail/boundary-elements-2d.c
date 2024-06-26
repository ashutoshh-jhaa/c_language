// Write a Program to print and find the sum of all boundary elements from a given 5x5 2D array.
#include <stdio.h>

int main()
{
    int size = 5;
    int array[size][size];
    int sum = 0;

    printf("Enter array's elements:\n");
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            printf("a[%d][%d]: ", i, j);
            scanf("%d", &array[i][j]);
        }
    }

    printf("Array : \n");
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            if (i == 0 || i == size - 1 || j == 0 || j == size - 1)
            {
                printf("%d ", array[i][j]);
                sum += array[i][j];
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }

    printf("\nThe sum of boundary elements : %d\n", sum);
}

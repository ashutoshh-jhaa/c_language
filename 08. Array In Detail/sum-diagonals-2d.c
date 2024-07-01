// Write a Program to find the sum of diagonal elements from a given 2D array.
#include "stdio.h"
int main()
{
    int size, sum = 0;
    printf("Enter the number of rows and columns : ");
    scanf("%d", &size);

    int array[size][size];

    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            printf("array[%d][%d]: ", i, j);
            scanf("%d", &array[i][j]);
        }
    }

    printf("The diagonal element's are : \n");
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            if (i == j)
            {
                printf("%d \t ", array[i][j]);
                sum += array[i][j];
            }
        }
    }
    printf("\nThe sum of diagonal elements : %d", sum);
}
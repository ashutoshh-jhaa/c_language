// Write a Program to find the largest element from a given 2D array.
#include "stdio.h"
int main()
{
    int row, column, max = 0;
    printf("Enter the number of rows : ");
    scanf("%d", &row);
    printf("Enter the number of column : ");
    scanf("%d", &column);

    int array[row][column];

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            printf("array[%d][%d]: ", i, j);
            scanf("%d", &array[i][j]);
        }
    }

    printf("ORIGINAL ARRAY\n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            printf("array[%d][%d] : %d\n", row, column, array[i][j]);
        }
    }

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            array[i][j] > max ? max = array[i][j] : 0;
        }
    }
    printf("Largest Number : %d", max);
}
// Write a Program to find the transpose matrix of a given 2D array.
#include "stdio.h"
int main()
{
    int row, column;
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
            printf("%d\t", array[i][j]);
        }
        printf("\n");
    }
    printf("TRANSPOSE\n");
    for (int i = 0; i < column; i++)
    {
        for (int j = 0; j < row; j++)
        {
            printf("%d\t", array[j][i]);
        }
        printf("\n");
    }
}
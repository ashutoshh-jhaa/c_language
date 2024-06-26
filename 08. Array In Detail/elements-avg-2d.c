// Write a Program to find the average of a given 2D array
#include "stdio.h"
int main()
{
    int row, column;
    float avg = 0;
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
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {

            avg += array[i][j];
        }
    }
    avg = avg / (row * column);
    printf("\nAverage : %.2f", avg);
}
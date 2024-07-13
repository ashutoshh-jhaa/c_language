// Write a Program to find cubes of all elements from a given 2D array using Pointer with UDF.
#include <stdio.h>

void cube(int row, int column, int array[row][column]);

int main()
{
    int row, column;
    printf("Enter the number of rows: ");
    scanf("%d", &row);
    printf("Enter the number of columns: ");
    scanf("%d", &column);

    int array[row][column];

    printf("Enter elements of the %dx%d array:\n", row, column);
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            printf("Array[%d][%d]: ", i, j);
            scanf("%d", &array[i][j]);
        }
    }

    cube(row, column, array);

    printf("Array after cubes:\n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            printf("%d\t", array[i][j]);
        }
        printf("\n");
    }

    return 0;
}

void cube(int row, int column, int array[row][column])
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            array[i][j] = array[i][j] * array[i][j] * array[i][j];
        }
    }
}

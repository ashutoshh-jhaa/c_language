// Write a Program to print and find the sum of all elements of a given row &column from a 2D array.
#include "stdio.h"
int main()
{
    int row, column, rownum, colnum, rowsum = 0, colsum = 0;
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

    printf("Enter the row number : ");
    scanf("%d", &rownum);
    if (rownum > row)
    {
        return 1;
    }
    printf("Elements of row : ");
    for (int i = 0; i < column; i++)
    {
        printf("%d\t", array[rownum][i]);
        rowsum += array[rownum][i];
    }
    printf("\nSum of row : %d", rowsum);

    printf("\nEnter the column number : ");
    scanf("%d", &colnum);
    if (colnum > column)
    {
        return 1;
    }
    for (int i = 0; i < row; i++)
    {
        printf("%d\t", array[i][colnum]);
        colsum += array[i][colnum];
    }
    printf("\nSum of column : %d", colsum);
}
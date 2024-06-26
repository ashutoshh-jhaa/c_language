// Write Program to perform the addition operation of two 2D arrays &store it in another array.Keep in mind that both array sizes must be the same.
#include <stdio.h>

int main()
{
    int row, column;
    printf("Enter the number of rows: ");
    scanf("%d", &row);
    printf("Enter the number of columns: ");
    scanf("%d", &column);

    int a1[row][column];
    int a2[row][column];
    int a3[row][column];

    printf("Enter elements for array 1:\n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            printf("array1[%d][%d]: ", i, j);
            scanf("%d", &a1[i][j]);
        }
    }

    printf("Enter elements for array 2:\n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            printf("array2[%d][%d]: ", i, j);
            scanf("%d", &a2[i][j]);
        }
    }

    printf("Elements of array3 (Sum of array1 and array2):\n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            a3[i][j] = a1[i][j] + a2[i][j];
            printf("%d\t", a3[i][j]);
        }
        printf("\n");
    }
}

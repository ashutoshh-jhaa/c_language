#include "stdio.h"
int main()
{
    int n1, n2;

    printf("Enter the size of array1 : ");
    scanf("%d", &n1);

    int a1[n1];

    for (int i = 0; i < n1; i++)
    {
        printf("Enter array[%d] : ", i);
        scanf("%d", &a1[i]);
    }

    printf("Enter the size of array2 : ");
    scanf("%d", &n2);

    int a2[n2];

    for (int i = 0; i < n2; i++)
    {
        printf("Enter array[%d] : ", i);
        scanf("%d", &a2[i]);
    }
    n1 += n2;
    a1[n1];

    for (int i = n1 - n2; i < n1; i++)
    {
        a1[i] = a2[i - (n1 - n2)];
    }

    for (int i = 0; i < n1; i++)
    {
        a1[(n1) + i] = a2[i - (n1 - n2)];
    }

    for (int i = 0; i < n1; i++)
    {
        printf("%d ", a1[i]);
    }
}
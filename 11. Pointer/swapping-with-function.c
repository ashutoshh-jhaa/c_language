#include "stdio.h"

int swap(int *, int *);
int access(int *, int *);

int main()
{
    // int a, b;
    // printf("enter the values of a and b ");
    // scanf("%d %d", &a, &b);
    // swap(&a, &b);
    // printf("%d %d", a, b);

    int alpha = 3, beta = 4;

    printf("%d%d", alpha, beta);

    swap(&alpha, &beta);

    printf("%d%d", alpha, beta);
}

int access(int *x, int *y)
{
    printf("%d%d", *x, *y);
    *x = 234;
}

int swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}
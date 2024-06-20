// Write a Program to find the formula's answer (x-y)^2
#include "stdio.h"
int main()
{
    int x, y;
    printf("enter the value of x : ");
    scanf("%d", &x);

    printf("enter the value of y : ");
    scanf("%d", &y);

    int formula = (x * x) + (y * y) - 2 * x * y;
    printf("(x-y)^2 = %d\n", formula);
}

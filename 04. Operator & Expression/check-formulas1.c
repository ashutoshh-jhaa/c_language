// Write a Program to find the formula's answer (x+y)^3.
#include "stdio.h"
int main()
{
    int x, y;
    printf("enter the value of x : ");
    scanf("%d", &x);

    printf("enter the value of y : ");
    scanf("%d", &y);

    int formula = (x * x * x) + (y * y * y) + (3 * (x * x) * y) + (3 * x * (y * y));
    printf("(x+y)^2 = %d\n", formula);
}

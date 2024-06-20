// Write a Program to find the formula's answer (x+y)^2.(x+y)^2 =(x+y)(x+y) = x*x+y*y+2xy
#include <stdio.h>

int main()
{
    int x, y;
    printf("enter the value of x : ");
    scanf("%d", &x);

    printf("enter the value of y : ");
    scanf("%d", &y);

    int eq1 = (x + y) * (x + y) * (x + y) * (x + y);
    int eq2 = (x + y) * (x + y);
    int eq3 = x * x + y * y + 2 * x * y;

    printf("(x + y)^2 (x + y)^2 = %d\n", eq1);
    printf("(x+y)(x+y) = %d\n", eq2);
    printf("x^2 + y^2 + 2xy = %d\n", eq3);

    if (eq1 == eq2 == eq3)
    {
        printf("The formula expansion is correct!\n");
    }
    else
    {
        printf("Error: The formula expansion is incorrect!\n");
    }

    return 0;
}
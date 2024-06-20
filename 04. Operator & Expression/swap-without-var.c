// Write a Program to Swap two variables using the third variable.
#include <stdio.h>

int main()
{
    int x, y, var3;

    printf("enter value of x ");
    scanf("%d,", &x);
    printf("enter value of y ");
    scanf("%d,", &y);

    printf("Before swapping: x = %d, y = %d\n", x, y);
    var3 = x;
    x = y;
    y = var3;
    printf("After swapping: x = %d, y = %d\n", x, y);
}

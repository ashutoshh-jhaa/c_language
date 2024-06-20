// Write a Program to Swap two variables without using a third variable.
#include <stdio.h>

int main()
{
    int x, y;

    printf("enter value of x ");
    scanf("%d,", &x);
    printf("enter value of y ");
    scanf("%d,", &y);

    printf("Before swapping: x = %d, y = %d\n", x, y);
    // method one
    // x = x + y;
    // y = x - y;
    // x = x - y;

    // method two
    x = x * y;
    y = x / y;
    x = x / y;
    printf("After swapping: x = %d, y = %d\n", x, y);
}

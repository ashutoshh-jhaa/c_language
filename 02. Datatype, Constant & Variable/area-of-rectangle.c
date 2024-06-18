// write a program to calculate area of rectangle

#include "stdio.h"

int main()
{
    // l-length,b-breadth
    float l, b;

    // take l from user
    printf("enter length of rectangle in meters\n");
    scanf("%f", &l);

    // take b from user
    printf("Enter the breadth of rectangle in meters\n");
    scanf("%f", &b);

    // formula of area
    float area = l * b;

    // print output
    printf("Area of rectangle length = %.2fm, breadth = %.2fm equals to %.2fsq m", l, b, area);
}
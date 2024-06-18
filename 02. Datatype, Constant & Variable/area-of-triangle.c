// program to find area of a triangle
#include "stdio.h"

int main()
{
    float b, h;

    printf("Enter base of triangle in metres\n");
    scanf("%f", &b);

    printf("Enter the height of Triangle in metres\n");
    scanf("%f", &h);

    float area = 0.5 * b * h;
    printf("Area Of Triangle with base = %.2f,heigth = %.2f equals to %.2fsq m", b, h, area);
}
// program to find area of circle
#include "stdio.h"
#define pi 3.14

int main()
{
    float radius;

    printf("Enter the Radius in meters :-");
    scanf("%f", &radius);

    float area = pi * radius * radius;

    printf("Area of Circle With Radius %.2fm is %.2fsq m", radius, area);
}
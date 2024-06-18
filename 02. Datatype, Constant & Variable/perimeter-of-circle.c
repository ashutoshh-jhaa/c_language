// program to find perimeter of circle

#include "stdio.h"

int main()
{
    const float pi = 3.14;
    float r;

    printf("Enter the radius in metres to find its perimeter\n");
    scanf("%f", &r);

    float area = 2 * pi * r;
    printf("Perimeter of circle with radius = %.2fm equals to %.2fsq m", r, area);
}
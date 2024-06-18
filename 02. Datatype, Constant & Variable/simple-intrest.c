// program to find simple intrest
#include "stdio.h"

int main()
{
    float p, r, t;

    printf("Enter the principle amount\n");
    scanf("%f", &p);

    printf("Enter the rate of intrest\n");
    scanf("%f", &r);

    printf("Enter the the tenure in years\n");
    scanf("%f", &t);

    float si = (p * r * t) / 100;

    printf("Your Simple Intrest is %.2f", si);
}
// Write a Program to convert temperature from degrees Celsius to Fahrenheit.
#include <stdio.h>
int main()
{
    float c;
    printf("Enter Temperature in Celsius :");
    scanf("%f", &c);
    printf("Given Temperature in Celcius: %.f\n", c);
    float f = (c * 9 / 5) + 32;

    printf("Given Temperature in Fahrenheit: %.2f", f);
}
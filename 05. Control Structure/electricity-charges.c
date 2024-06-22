/*Write a Program to input electricity unit charges and calculate the total electricity bill according to the given condition:
For the first 50 units Rs. 0.50/unit
For the next 100 units Rs. 0.75/unit
For the next 100 units Rs. 1.20/unit
For units above 250 Rs. 1.50/unit
An additional surcharge of 20% is added to the bill.*/

#include "stdio.h"
int main()
{
    int units;
    float bill, total;

    printf("Enter units of bill : ");
    scanf("%d", &units);

    if (units <= 50)
    {
        bill = units * 0.50;
    }
    else if (units >= 51 && units <= 150)
    {
        units = units - 50;
        bill = (units * 0.75) + (50 * 0.50);
    }
    else if (units >= 151 && units <= 250)
    {
        units = units - 150;
        bill = (units * 1.20) + (100 * 0.75) + (50 * 0.50);
    }
    else if (units >= 251)
    {
        units = units - 250;
        bill = (units * 1.50) + (100 * 1.20) + (100 * 0.75) + (50 * 0.50);
    }
    total = bill + (bill * 0.20);
    printf("Total Amount in Rs. : %.2f", total);
}
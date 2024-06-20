// Write C Program to find gross salary by adding of HRA, DA, and TA of user choice.
#include <stdio.h>

int main()
{
    int base, hra, da, ta;

    printf("Enter Base Salary : ");
    scanf("%d", &base);

    printf("Enter HRA : ");
    scanf("%d", &hra);

    printf("Enter DA: ");
    scanf("%d", &da);

    printf("Enter TA: ");
    scanf("%d", &ta);

    int gross = base + hra + da + ta;

    printf("Total Gross = Rs. %d", gross);
}
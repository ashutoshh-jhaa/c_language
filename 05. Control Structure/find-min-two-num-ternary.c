// Write a Program to find the minimum number from the given 3 numbers using the ternary operator.
#include <stdio.h>

int main()
{
    int num1, num2, num3;

    printf("Enter three numbers : ");
    scanf("%d %d %d", &num1, &num2, &num3);
    printf("The minimum of the three numbers is: %d\n",
           (num1 > num2) ? ((num2 > num3) ? num3 : num2) : num1);
    return 0;
}

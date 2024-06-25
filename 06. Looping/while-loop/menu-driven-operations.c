/*Write a menu-driven program to implement arithmetic operations such as +, -, *, /,
 and % using UDF, switch case, and looping. Make sure that the program is endless
 until a certain letter is pressed.*/
#include <stdio.h>

int add(int num1, int num2);
int sub(int num1, int num2);
int mul(int num1, int num2);
int div(int num1, int num2);
int mod(int num1, int num2);

int main()
{
    int choice, num1, num2;

    while (1)
    {
        printf("\nPress 1 for +\n");
        printf("Press 2 for -\n");
        printf("Press 3 for *\n");
        printf("Press 4 for /\n");
        printf("Press 5 for %%\n");
        printf("Press 0 to exit\n\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice == 0)
        {
            printf("Exiting the program.\n");
            break;
        }

        printf("Enter the first number: ");
        scanf("%d", &num1);
        printf("Enter the second number: ");
        scanf("%d", &num2);

        switch (choice)
        {
        case 1:
            printf("Addition of %d and %d is %d\n", num1, num2, add(num1, num2));
            break;
        case 2:
            printf("Subtraction of %d and %d is %d\n", num1, num2, sub(num1, num2));
            break;
        case 3:
            printf("Multiplication of %d and %d is %d\n", num1, num2, mul(num1, num2));
            break;
        case 4:
            if (num2 != 0)
                printf("Division of %d and %d is %d\n", num1, num2, div(num1, num2));
            else
                printf("Cannot divide by zero\n");
            break;
        case 5:
            printf("Modulus of %d and %d is %d\n", num1, num2, mod(num1, num2));
            break;
        default:
            printf("Invalid choice\n");
        }
    }

    return 0;
}

int add(int num1, int num2)
{
    return num1 + num2;
}

int sub(int num1, int num2)
{
    return num1 - num2;
}

int mul(int num1, int num2)
{
    return num1 * num2;
}

int div(int num1, int num2)
{
    return num1 / num2;
}

int mod(int num1, int num2)
{
    return num1 % num2;
}

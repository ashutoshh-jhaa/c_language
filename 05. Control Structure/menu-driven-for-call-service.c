// Write a Program to create a menu-driven program for Telecom call service conversation using nested switch case.
#include <stdio.h>

int main()
{
    int langChoice, rechargeChoice;

    printf("Press 1 for English\nPress 2 for Hindi\nPress 3 for Gujarati\nEnter your choice: ");
    scanf("%d", &langChoice);
temp:
    switch (langChoice)
    {
    case 1:
        printf("English selected.\n");
        printf("\nPress 1 for Internet Recharge\nPress 2 for Top-up Recharge\nPress 3 for Special Recharge\nEnter your choice: ");
        scanf("%d", &rechargeChoice);
        switch (rechargeChoice)
        {
        case 1:
            printf("You have successfully done Internet Recharge.\n");
            break;
        case 2:
            printf("You have successfully done Top-up Recharge.\n");
            break;
        case 3:
            printf("You have successfully done Special Recharge.\n");
            break;
        default:
            printf("Invalid choice for recharge option.\n");
            break;
        }
        break;
    case 2:
        printf("Hindi selected.\n");
        printf("\nPress 1 for Internet Recharge\nPress 2 for Top-up Recharge\nPress 3 for Special Recharge\nEnter your choice: ");
        scanf("%d", &rechargeChoice);
        switch (rechargeChoice)
        {
        case 1:
            printf("You have successfully done Internet Recharge.\n");
            break;
        case 2:
            printf("You have successfully done Top-up Recharge.\n");
            break;
        case 3:
            printf("You have successfully done Special Recharge.\n");
            break;
        default:
            printf("Invalid choice for recharge option.\n");
            break;
        }
        break;
    case 3:
        printf("Gujarati selected.\n");
        printf("\nPress 1 for Internet Recharge\nPress 2 for Top-up Recharge\nPress 3 for Special Recharge\nEnter your choice: ");
        scanf("%d", &rechargeChoice);
        switch (rechargeChoice)
        {
        case 1:
            printf("You have successfully done Internet Recharge.\n");
            break;
        case 2:
            printf("You have successfully done Top-up Recharge.\n");
            break;
        case 3:
            printf("You have successfully done Special Recharge.\n");
            break;
        default:
            printf("Invalid choice for recharge option.\n");
            break;
        }
        break;
    default:
        printf("Invalid choice for language.\n");
        printf("\nPress 1 for Internet Recharge\nPress 2 for Top-up Recharge\nPress 3 for Special Recharge\nEnter your choice: ");
        scanf("%d", &rechargeChoice);
        switch (rechargeChoice)
        {
        case 1:
            printf("You have successfully done Internet Recharge.\n");
            break;
        case 2:
            printf("You have successfully done Top-up Recharge.\n");
            break;
        case 3:
            printf("You have successfully done Special Recharge.\n");
            break;
        default:
            printf("Invalid choice for recharge option.\n");
            break;
        }
        break;
    }
}

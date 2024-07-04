// Write a Program to convert the given string in lowercase without using any string function.
#include "stdio.h"
int main()
{
    char string[20];
    printf("Enter any in Uppercase : ");
    scanf("%s", string);

    for (int i = 0; string[i] != '\0'; i++)
    {
        if (string[i] >= 'A' && string[i] <= 'Z')
        {
            string[i] += 32;
        }
    }
    printf("%s", string);
}

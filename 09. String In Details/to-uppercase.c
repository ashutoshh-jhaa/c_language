// Write a Program to convert the given string in uppercase without using any string function.
#include "stdio.h"
int main()
{
    char string[20];
    printf("Enter any string in Lowercase : ");
    scanf("%s", string);

    for (int i = 0; string[i] != '\0'; i++)
    {
        if (string[i] >= 'a' && string[i] <= 'z')
        {
            string[i] -= 32;
        }
    }
    printf("%s", string);
}

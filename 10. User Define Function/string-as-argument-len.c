// Write a Program to find the length of the String by passing a string as an argument using UDF
#include <stdio.h>

int size(char *string);

int main()
{
    char array[10];
    printf("Enter a string: ");
    scanf("%s", array);
    printf("Length of string: %d\n", size(array));
}

int size(char *string)
{
    int length;
    for (length = 0; string[length] != '\0'; length++)
    {
    }
    return length;
}
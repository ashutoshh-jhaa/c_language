// Write a Program to find the length of a string using a Pointer.
#include <stdio.h>

#include <stdio.h>

int main()
{
    char string[100];
    int length = 0;

    printf("Enter any string: ");
    scanf("%s", string);

    char *ptr;
    ptr = string;

    while (*ptr != '\0')
    {
        length++;
        ptr++;
    }

    printf("Length of the string: %d\n", length);
}

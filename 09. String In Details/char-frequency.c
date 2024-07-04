// Write a Program to count the frequency of each character in a given string.
#include <stdio.h>
#include <string.h>

int main()
{
    char string[20];
    int frequency[256] = {0};

    printf("Enter any string: ");
    scanf("%[^\n]", string);

    for (int i = 0; string[i] != '\0'; i++)
    {
        frequency[(int)string[i]]++;
    }

    printf("Frequency of each letter:\n");
    for (int i = 0; i < 256; i++)
    {
        if (frequency[i] != 0 && (i >= 32 && i <= 126))
        {
            printf("%c => %d\n", i, frequency[i]);
        }
    }
}

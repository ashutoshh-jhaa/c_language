// check for palindrome without using inbuilt functions
#include <stdio.h>
#include <string.h>

int main()
{
    char name[20];

    printf("Enter a name : ");
    scanf("%s", name);

    char replica[20];

    int len = strlen(name);
    for (int i = 0; i < len; i++)
    {
        replica[i] = name[len - i - 1];
    }
    replica[len] = '\0';

    int palindrome = 1;
    for (int i = 0; i < strlen(name); i++)
    {
        if (name[i] != replica[i])
        {
            palindrome = 0;
            break;
        }
    }
    if (palindrome)
    {
        printf("It is palindrome");
    }
    else
        printf("It is not palindrome");
}

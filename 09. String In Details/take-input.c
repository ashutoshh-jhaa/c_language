#include <stdio.h>

int main()
{
    char string[20];
    for (int i = 0; string[i] != '\n'; i++)
    {
        scanf(" %c", string[i]);
    }
    printf("%s", string);
}
//

// printf("%s\n", &string[0]);
// printf("%s\n", string);
// printf("%c\n", string[0]);
// printf("%c\n", string[5]);
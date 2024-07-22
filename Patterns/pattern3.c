#include "stdio.h"
int main()
{

    int k;
    for (int i = 0; i < 5; i++)
    {
        k = 65;
        for (int j = 0; j < 5; j++)
        {
            if (j >= i)
            {
                printf("%c", k);
                k++;
            }
            else
                printf(" ");
        }
        printf("\n");
    }
}
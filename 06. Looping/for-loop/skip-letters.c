// Write a Program to print all alphabets from a to z by skipping 3 alphabets using do while loop.
#include "stdio.h"
int main()
{
    for (char i = 'a'; i <= 'z'; i = i + 4)
    {
        printf("%c ", i);
    }
}
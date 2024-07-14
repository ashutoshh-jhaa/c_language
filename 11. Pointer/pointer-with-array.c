#include "stdio.h"
// void input(int *, int);
// void display(int *, int);
void innew(int[], int);

int main()
{
    int a[5];
    int b[5];
    // int *p;
    // p = &a[0]; // same as a[0]
    // printf("%d", *(p + 1));
    // input(&a[0], 5);
    innew(b, 5);
    // display(&a[0], 5);
}
void innew(int b[0], int size)
{
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &b[i]);
    }
    for (int i = 0; i < size; i++)
    {
        printf("%d", b[i]);
    }
}
void input(int *p, int size)
{
    printf("enter the elements into the array : ");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", p + i);
    }
}
void display(int *p, int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d", *(p + i));
    }
}
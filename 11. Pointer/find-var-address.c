#include "stdio.h"
int main()
{
    int x = 423;
    // printf("%d", &x);
    // prints the memory which is allocated to the x variable also know as refrencing operator or address of operator
    // takes variable after the symbol thus returns the address of the variable

    // printf("%d", *&x);
    // derefrencing operator or indirection operator which just opposite of the refrencing operator thus takes address and give the value stored
    // takes the address of the variable thus returns what on the address
    // output-423 (*&x is as good as x)
    // char str[320] = "ashutosh";

    int *address; // just a way of declaring the pointer
    address = &x; // stores the address of the x into addresss
    // printf("%d", *address); // address is a address thus and * takes address and gives what on that address;

    // printf("%d %d %d", &x, address, *&x);
    // printf("%d %d %d", *address, x, &address);

    int a = 23;
    int *p = &a; // size of the pointer is always 8bit on 64 bit architect and 4 on 32bit
    // printf("%d", *p);
    char *c = &a; // gives warning but not error as the pointer is of type char but the variable int
    // printf("%d", *c);

    int alpha = 24;
    int *a1 = &alpha;
    int **a2 = &a1;
    printf("%d values of the alpha\n", alpha);
    printf("%d values of the alpha stored into the pointer\n", *a1);
    printf("%d values of the pointer which stores a2\n", *a2);
}

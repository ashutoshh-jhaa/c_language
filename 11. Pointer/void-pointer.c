/*
when a pointer is declared with void it becomes void pointer
we can't use dereferencing on void pointer
we can increment or decrement (it will inc or dec by 1 byte)
this is because the pointer has no type (void)
for doing dereferencing we need to type cast the void pointer into another type
 */
#include "stdio.h"
int main()
{
  int a = 32;
  void *vptr = &a;
  // printf("%d", *vptr);// not allowed throws error
  int *ptr = (int *)vptr; // typecasting void into int type;
  printf("%d", *ptr);
  printf("%d", *(int *)vptr);//directly typecasting

}
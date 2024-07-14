// what is dangling pointer => a dangling pointer refers to a pointer that points to a memory location that has already been deallocated (freed) or is no longer valid
#include "stdio.h"
int *newfn() // this function is released from the memory after execution so there's no reserved space for the variable a but as we are passing the address of a to the main() function it creates a dangling pointer
{
  int a = 43;
  int *ptr = &a;
  return ptr;
}
int main()
{
  int *ptr = newfn();
  printf("%d", *ptr);
}
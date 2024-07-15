// what is dangling pointer => a dangling pointer refers to a pointer that points to a memory location that has already been deallocated (freed) or is no longer valid
#include "stdio.h"
int *newfn() //In the function newfn(), the variable a is allocated on the stack. When newfn() finishes executing, the stack space allocated for a is no longer reserved or guaranteed to hold the same value.
{
  int a = 43;
  int *ptr = &a;
  return ptr;
}
int main()
{
  int *ptr = newfn();//ptr is dangling pointer as it points to unreserved memory (a gets vanished from stack after the newfn() is done with execution)
  printf("%d", *ptr);
}
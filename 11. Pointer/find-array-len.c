#include "stdio.h"
int main()
{
  int a[] = {1, 2, 3, 4, 5, 6, 34};
  int s = *(&a + 1) - a;
}
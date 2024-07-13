#include "stdio.h"
int main()
{
  int a = 3, b;
  b = a++ + a++;
  printf("%d %d", a, b);
}
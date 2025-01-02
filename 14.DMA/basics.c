#include "stdio.h"
#include "stdlib.h"
int main() {
  int* malPtr = (int*)malloc(20);
  *malPtr = 434;
  printf("%d\n", *malPtr);

  int* calPtr = (int*)calloc(5, 4);
  *(calPtr + 1) = 32;
  printf("%d", calPtr[1]);
}
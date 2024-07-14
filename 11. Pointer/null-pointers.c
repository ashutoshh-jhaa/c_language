/*
  by default if we don't init pointer with address it has garbage value in it
  which could point to any location in memory which we have not reserved so we initilize the
  pointer with null so that it's won't point to any location thuss preventing
  undefined behaviours , security risks ,or illegal memory access
*/

#include "stdio.h"
int main()
{
  int *ptr; // it has garbage value
  printf("%d", *ptr);
  int *ptr2 = NULL; // this doesn't points to any location
}
// wap to find if the number is even or odd using bitwise
/*
the logic behind is that if the lsb of a number is 0 than its even else odd
*/
#include "stdio.h"
int main() {
  int num, result;
  printf("Enter any number : ");
  scanf("%d", &num);
  result = num & 1;
  if (result == 0)
    printf("The number is even");
  else
    printf("The number is odd");
}
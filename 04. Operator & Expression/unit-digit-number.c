// wap to print the unit digit of a given number
#include "stdio.h"
int main() {
  int num, unit;
  printf("Enter any number : ");
  scanf("%d", &num);
  // check if the number is a valid number
  if (num < 0) {
    num = -num;
  }
  // gives the last digit of any number
  unit = num % 10;
  printf("the unit place of the number is %d", unit);
}
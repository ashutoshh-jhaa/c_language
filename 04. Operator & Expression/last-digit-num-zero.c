// wap to make last digit of number zero
#include "stdio.h"
int main() {
  int num;
  printf("Enter any number : ");
  scanf("%d", &num);
  if (num % 10 == 0) {
    printf("The last digit of the number is already zero");
    return 0;
  }
  if (num < 10) {
    printf("please enter two digit number");
    return 0;
  }

  num = (num / 10) * 10;

  printf("The number with last digit zero : %d", num);
}
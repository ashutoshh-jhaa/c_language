// wap to print given number without it's last digit
#include "stdio.h"
int main() {
  int num;
  printf("Enter any number : ");
  scanf("%d", &num);
  // when number entered is 0
  if (num == 0) {
    printf("The number can not be 0");
    return 0;
  }

  num = num / 10;
  printf("Number without it's last digit %d ", num);
}
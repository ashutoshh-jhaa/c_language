// write a program to take a number from user and also a digit then append that
// digit at the end of number
#include "stdio.h"
int main() {
  int num, digit;
  printf("Enter any number : ");
  scanf("%d", &num);
  printf("Enter any digit : ");
  scanf("%1d", &digit);  // 1d takes only 1 digit from the entered number
  num = (num * 10) + digit;
  printf("Number with appended digit : %d", num);
}
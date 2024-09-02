// write a program to check if the given number is 3 digit number or not
#include "stdio.h"
int main() {
  int num, counter = 0;
  printf("Enter any 3 digit Number : ");
  scanf("%d", &num);
  // iterative way to solve this problem
  // while (num != 0) {
  //   num /= 10;
  //   counter++;
  //   if (counter > 3) {
  //     break;
  //   }
  // }
  // if (counter == 3) {
  //   printf("The entered number is 3 digit number");
  // } else {
  //   printf("The number is not 3 digit number");
  // }
  // simpler way to solve this question
  if (num >= 100 && num <= 999) {
    printf("the number is 3 digit number");
  }
  else{
    printf("The number is not 3 digit number ");
  }
}
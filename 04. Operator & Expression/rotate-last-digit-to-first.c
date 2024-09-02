// wap to take number from the user then rotate it's digit by one position
// towards the right
#include "stdio.h"
// solution only for 3 digits number
//  int main() {
//    int num, lastDigit;
//    printf("Enter any three digit number : ");
//    scanf("%3d", &num);  // takes only 3 digit number from the user
//    lastDigit = num % 10;
//    num /= 10;
//    num = (lastDigit * 100) + num;
//    printf("Rotated number : %d", num);
//  }
//  more generalized solution
int main() {
  int num, lastDigit, zeros = 1, temp;

  printf("Enter any number : ");
  scanf("%d", &num);

  // for zeros
  temp = num / 10;
  while (temp != 0) {
    temp /= 10;
    zeros *= 10;
  }
  printf("Number of digits is : %d\n", zeros);

  lastDigit = num % 10;
  num /= 10;
  num = (lastDigit * zeros) + num;

  printf("Rotated Number : %d\n", num);
}
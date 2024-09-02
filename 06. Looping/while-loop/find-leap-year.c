// Write a Program to print leap years between two given numbers using a while
// loop.
// some century year which are divisible by 4 but are not leap year thus
// we need to check their divisibilty with 400
#include "stdio.h"
int main() {
  int start, end;
  printf("Enter start year : ");
  scanf("%d", &start);
  printf("Enter end year : ");
  scanf("%d", &end);

  while (start <= end) {
    // without separating both concerns
    if ((start % 400 == 0) || (start % 4 == 0 && start % 100 != 0)) {
      printf("Leap year : %d\n", start);
    }
    start++;

    // for separating both concerns
    // if (start % 100 == 0) {
    //   // For century years
    //   if (start % 400 == 0) {
    //     printf("Century leap years : %d\n", start);
    //   }
    // } else {
    //   // For non-century years
    //   if (start % 4 == 0) {
    //     printf("Leap year : %d\n", start);
    //   }
    // }
    // start++;
  }
}

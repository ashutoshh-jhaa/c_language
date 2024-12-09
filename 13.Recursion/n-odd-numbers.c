#include "stdio.h"

void recurOdd(int n) {
  if (n == 0) {
    return;
  } else {
    recurOdd(n - 1);
    if (n % 2 != 0) {
      printf("%d\n", n);
    }
  }
}

int main() {
  int n;
  printf("Enter the value of n : \n");
  scanf("%d", &n);
  printf("Value of n : %d\n", n);
  recurOdd(n);
}

#include "stdio.h"
void recurOddReverse(int n) {
  if (n == 0) {
    return;
  } else {
    if (n % 2 != 0) {
      printf("%d\n", n);
    }
    recurOddReverse(n - 1);
  }
}
int main() {
  int n;
  printf("Enter the value of n : \n");
  scanf("%d", &n);
  printf("n = %d\n", n);
  recurOddReverse(n);
}

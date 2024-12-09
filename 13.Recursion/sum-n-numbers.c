#include "stdio.h"
int sumN(int n) {
  if (n == 1) {
    return 1;
  } else {
    return n + sumN(n - 1);
  }
}
int main() {
  int n;
  printf("Enter any Number : \n");
  scanf("%d", &n);
  printf("%d", sumN(n));
}

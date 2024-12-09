#include "stdio.h"
// 324
int recurRev(int n) {
  if (n == 0) {
    return 1;
  }
  printf("%d", n % 10);
  recurRev(n / 10);
}

int main() {
  int n;
  printf("Enter any number\n");
  scanf("%d", &n);
  recurRev(n);
}

#include "stdio.h"

void recurEven(int n) {
  if (n == 0) {
    return;
  } else {
    if (n % 2 == 0) {
      printf("%d\n", n);
    }
    recurEven(n - 1);
  }
}

int main() {
  int num;
  printf("Enter the value of n : \n");
  scanf("%d", &num);
  printf("n = %d\n", n);
  recurEven(num);
}

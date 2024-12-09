#include "stdio.h"

void recurN(int n) {
  if (n == 0) {
    return;
  } else {
    printf("%d\n", n);
    recurN(n - 1);
  }
}

int main() {
  int num;
  printf("Enter any the value of n : \n");
  scanf("%d", &num);
  printf("n equals : %d\n", num);
  recurN(num);
}

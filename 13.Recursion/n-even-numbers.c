#include "stdio.h"

void recurEven(int n) {
  if (n == 0) {
    return;
  } else {
    recurEven(n - 1);
    if (n % 2 == 0) {
      printf("%d\n", n);
    }
  }
}
void recurEven1(int n) {
  if (n == 0) {
    return;
  } else {
    recurEven1(n - 1);
    printf("%d\n", 2 * n );
  }
}
int main() {
  int num;
  printf("Enter the value of n : \n");
  scanf("%d", &num);
  printf("n = %d\n", num);
  recurEven(num);
  printf("\n");
  recurEven1(num);
}

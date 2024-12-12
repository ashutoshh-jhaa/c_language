#include "stdio.h"
void findFibo(int n, int prev, int curr) {
  if (n == 2) {
    return;
  }
  printf("%d\n", prev + curr);
  findFibo(n - 1, curr, prev + curr);
}
int main() {
  int n;
  printf("Enter the value of n : ");
  scanf("%d", &n);
  if (n == 0) {
    printf("0\n");
  } else if (n == 1) {
    printf("0\n");
    printf("1\n");
  } else if (n > 2) {
    printf("0\n");
    printf("1\n");
    findFibo(n, 0, 1);
  }
}

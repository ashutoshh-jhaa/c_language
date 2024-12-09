#include "stdio.h"

void findBinary(int n) {
  if (n == 0) {
    return;
  } else {
    findBinary(n >> 1);    // right shift n
    printf("%d\n", n & 1); // this will give lsb
  }
}

int main() {
  int num;
  printf("Enter any Number\n");
  scanf("%d", &num);
  findBinary(num);
}

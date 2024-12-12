#include "stdio.h"

int findLen(int n) {
  if (n == 0) {
    return 0;
  } else {
    return findLen(n / 10) + 1;
  }
}

int main() {
  int num;
  printf("Enter any Number\n");
  scanf("%d", &num);

  printf("Length of %d equals : %d", num, findLen(num));
}

//wap to find the first 1 in lsb least significant bit
#include "stdio.h"

findfirstlsb(num) {
  int position = 1;
  while (num > 0) {
    if (num & 1) {  // 1&1 gives 1 which means we've found the first 1
      return position;
    }
    num >>= 1;  // right shift
    position++;
  }
  return -1;
}

int main() {
  int num;
  printf("Enter any number : ");
  scanf("%d", &num);
  int position = findfirstlsb(num);
  if (position != -1)
    printf("The first 1 exists at position %d", position);
  else
    printf("There's no one as the number is zero");
}
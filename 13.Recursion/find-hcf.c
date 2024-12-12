// wap tp find hcf of two numbers
#include "stdio.h"
int findHcf(int big, int small) {
  if (small == 0) {
    return big;
  } else {
    return findHcf(small, big % small);
  }
}
int main() {
  int num1, num2;
  printf("Enter any two numbers : \n");
  scanf("%d%d", &num1, &num2);
  printf("%d\n",
         findHcf((num1 > num2) ? num1 : num2, (num1 < num2) ? num1 : num2));
}

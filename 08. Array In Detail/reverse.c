#include "stdio.h"

int main() {
  int n;
  printf("Enter the value of n : \n");
  scanf("%d", &n);

  int a[n];

  for (int i = 0; i < n; i++) {
    printf("arr[%d] : ", i);
    scanf("%d", &a[i]);
  }

  for (int i = 0; i < n / 2; i++) {
    int temp = a[i];
    a[i] = a[n - i - 1];
    a[n - i - 1] = temp;
  }

  printf("Reversed array:\n");
  for (int i = 0; i < n; i++) {
    printf("a[%d] : %d\n", i, a[i]);
  }

  return 0;
}

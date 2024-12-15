// wap to find unique elements in an array
#include "stdio.h"
int main() {
  int n;
  printf("Enter the value of n : \n");
  scanf("%d", &n);

  int a[n];

  for (int i = 0; i < n; i++) {
    printf("a[%d] : ", i);
    scanf("%d", &a[i]);
  }
  for (int i = 0; i < n; i++) {
    int counter = 0;
    for (int j = 0; j < n; j++) {
      if (i != j && a[i] == a[j]) {
        counter++;
      }
      if (counter) {
        break;
      }
    }
    if (!counter) {
      printf("[%d] = %d\n", i, a[i]);
    }
  }
}

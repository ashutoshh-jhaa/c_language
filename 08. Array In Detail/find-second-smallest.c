#include "stdio.h"

int main() {
  int n;
  printf("Enter the value of n: ");
  scanf("%d", &n);

  if (n < 2) {
    printf("Array should have at least two elements.\n");
    return 0;
  }

  int array[n];
  for (int i = 0; i < n; i++) {
    printf("array[%d]: ", i);
    scanf("%d", &array[i]);
  }

  printf("Array:\n");
  for (int i = 0; i < n; i++) {
    printf("array[%d]: %d\n", i, array[i]);
  }

  int smallest = array[0];
  int secondSmallest = 99999;

  for (int i = 1; i < n; i++) {
    if (array[i] < smallest) {
      secondSmallest = smallest;
      smallest = array[i];
    } else if (array[i] > smallest && array[i] < secondSmallest) {
      secondSmallest = array[i];
    }
  }

  if (secondSmallest == 99999) {
    printf(
        "No second smallest element found (all elements might be the same).\n");
  } else {
    printf("Second smallest element = %d\n", secondSmallest);
  }

  return 0;
}

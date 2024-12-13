#include "stdio.h"

int main() {
  int n;
  printf("Enter the value of n : ");
  scanf("%d", &n);

  if (n < 2) {
    printf("Array should have at least two elements.\n");
    return 0;
  }

  int array[n];
  for (int i = 0; i < n; i++) {
    printf("array[%d] : ", i);
    scanf("%d", &array[i]);
  }

  printf("Array : \n");
  for (int i = 0; i < n; i++) {
    printf("array[%d] : %d\n", i, array[i]);
  }

  int largest = array[0], secondLargest = -1;

  for (int i = 1; i < n; i++) {
    if (array[i] > largest) {
      secondLargest = largest;
      largest = array[i];
    } else if (array[i] > secondLargest && array[i] < largest) {
      secondLargest = array[i];
    }
  }

  if (secondLargest == -1) {
    printf("No distinct second largest element\n");
  } else {
    printf("secondLargest = %d\n", secondLargest);
  }

  return 0;
}

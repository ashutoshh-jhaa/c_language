// wap to find the frequencies of duplicate elements
#include "stdio.h"

int main() {
  int n;
  printf("Enter the value of n : \n");
  scanf("%d", &n);

  int arr[n];

  for (int i = 0; i < n; i++) {
    printf("arr[%d] : ", i);
    scanf("%d", &arr[i]);
  }

  printf("Array : \n");
  for (int i = 0; i < n; i++) {
    printf("arr[%d] : %d\n", i, arr[i]);
  }

  printf("Duplicates:\n");
  for (int i = 0; i < n; i++) {
    if (arr[i] == -1) {
      continue;
    }
    int count = 1;
    for (int j = i + 1; j < n; j++) {
      if (arr[i] == arr[j]) {
        count++;
        arr[j] = -1;
      }
    }
    if (count > 1) {
      printf("%d : %d\n", arr[i], count);
    }
  }

  return 0;
}

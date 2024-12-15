#include "stdio.h"
// waf to find the first occurrence of adjacent duplicate elements
int findAdjDuplicate(int arr[], int n) {
  for (int i = 0; i < n - 1; i++) {
    if (arr[i] == arr[i + 1])
      return arr[i];
  }
  return -1;
};

int main() {
  int n;
  printf("Enter the value of n : \n");
  scanf("%d", &n);

  int arr[n];

  for (int i = 0; i < n; i++) {
    printf("arr[%d] : ", i);
    scanf("%d", &arr[i]);
  }

  int result = findAdjDuplicate(arr, n);
  if (result == -1) {
    printf("No adjacent duplicates found.\n");
  } else {
    printf("First adjacent duplicate element: %d\n", result);
  }
  return 0;
}

// wap to find the frequencies of each element
#include "stdio.h"
int main() {
  int n;
  printf("Enter the value of n : \n");
  scanf("%d", &n);

  int arr[n], visited[n];

  for (int i = 0; i < n; i++) {
    printf("arr[%d] = ", i);
    scanf("%d", &arr[i]);
    visited[i] = 0;
  }

  printf("Frequencies of each element:\n");
  for (int i = 0; i < n; i++) {
    if (visited[i] == 1) {
      continue;
    }
    int count = 1;
    for (int j = i + 1; j < n; j++) {
      if (arr[i] == arr[j]) {
        count++;
        visited[j] = 1;
      }
    }
    printf("%d times : %d\n", arr[i], count);
  }
}

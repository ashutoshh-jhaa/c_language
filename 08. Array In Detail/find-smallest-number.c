#include "stdio.h"
int main() {
  int n;
  printf("Enter the value of n : ");
  scanf("%d", &n);
  int array[n];
  for (int i = 0; i < n; i++) {
    printf("array[%d] : ", i);
    scanf("%d", &array[i]);
  }
  printf("Array : \n");
  for (int i = 0; i < n; i++) {
    printf("array[%d] : %d\n", i, array[i]);
  }
  int smallest = array[0];
  for (int i = 1; i < n; i++) {
    if (array[i] < smallest) {
      smallest = array[i];
    }
  }
  printf("\nsmallest = %d\n", smallest);
}

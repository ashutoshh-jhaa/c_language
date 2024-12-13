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
  int greatest = array[0];
  for (int i = 1; i < n; i++) {
    if (array[i] > greatest) {
      greatest = array[i];
    }
  }
  printf("\ngreatest = %d\n", greatest);
}

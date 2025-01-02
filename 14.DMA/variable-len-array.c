// Write a C program to dynamically allocate memory for an integer array using
// calloc, take n inputs from the user, and display the values with their
// indices. Handle memory allocation failure.
#include "stdio.h"
#include "stdlib.h"

int main() {
  int n;
  printf("Enter the number of Values you want to enter : ");
  scanf("%d", &n);

  int* ptr = (int*)calloc(n, 4);

  if (ptr == NULL) {
    printf("Memory Allocation Failed!");
    return 0;
  }
  printf("Enter Values :\n");

  for (int i = 0; i < n; i++) {
    printf("array[%d] : ", i + 1);
    scanf("%d", (ptr + i));
  }

  printf("Array : \n");
  for (int i = 0; i < n; i++) {
    printf("array[%d] = %d\n", i, *(ptr + i));
  }

  free(ptr);
}
#include "stdio.h"
int main() {
  int n;
  printf("Enter the value of n : \n");
  scanf("%d", &n);

  int ary[n];
  int hashMap[9999] = {0};
  for (int i = 0; i < n; i++) {
    scanf("%d", &ary[i]);
    hashMap[ary[i]]++;
  }
  for (int i = 0; i < 9999; i++) {
    if (hashMap[i] != 0) {
      printf("%d = %d\n", i, hashMap[i]);
    }
  }
}

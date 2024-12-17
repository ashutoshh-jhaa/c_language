#include "stdio.h"
int findLen(char name[]) {
  int count = 0;
  for (int i = 0; name[i] != '\0'; i++) {
    count++;
  }
  return count;
}
int main() {
  char name[9] = {'a', 's', 'u', 't', 'o', 's', 'h'};
  printf("%d\n", findLen(name));
}

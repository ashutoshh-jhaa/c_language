#include "stdio.h"

int main() {
  char name[50];
  printf("Enter your name: \n");
  fgets(name, 50, stdin);

  int i = 0, length = 0;

  while (name[length] != '\n' && name[length] != '\0') {
    length++;
  }
  name[length] = '\0';

  if (length == 0) {
    printf("No input entered. Exiting.\n");
    return 0;
  }

  printf("Original string: %s\n", name);

  int temp;
  i = 0;
  while (i < length / 2) {
    temp = name[i];
    name[i] = name[length - i - 1];
    name[length - i - 1] = temp;
    i++;
  }

  printf("Reversed string: %s\n", name);

  return 0;
}

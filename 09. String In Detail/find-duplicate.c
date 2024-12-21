#include "stdio.h"
#include "string.h"

int main() {
  char name[50];
  printf("Enter any string: \n");
  fgets(name, 50, stdin);

  int len = strlen(name);
  if (name[len - 1] == '\n') {
    name[len - 1] = '\0';
  }

  int temp[255] = {0};

  for (int i = 0; name[i] != '\0'; i++) {
    temp[name[i]]++;
  }

  printf("Duplicate characters:\n");
  for (int i = 0; i < 255; i++) {
    if (temp[i] > 1) {
      printf("%c = %d times\n", i, temp[i]);
    }
  }

  return 0;
}

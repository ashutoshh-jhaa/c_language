#include "stdio.h"

int main() {
  char name[50];
  printf("Enter any phrase:\n");
  fgets(name, 50, stdin);

  int words = 0, i = 0;
  int isInWord = 0;

  while (name[i] != '\0' && name[i] != '\n') {
    if (name[i] != ' ' && name[i] != '\t') {
      if (!isInWord) {
        isInWord = 1;
        words++;
      }
    } else {
      isInWord = 0;
    }
    i++;
  }

  printf("Words = %d\n", words);
  return 0;
}

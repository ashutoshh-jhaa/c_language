#include "stdio.h"
#include "string.h"

int main() {
  char str[50];

  printf("Enter a string: \n");
  fgets(str, 50, stdin);

  int len = strlen(str);

  if (str[len - 1] == '\n') {
    str[len - 1] = '\0';
  }

  char chr;
  printf("Enter a character to find its frequency: \n");
  scanf("%c", &chr);

  int count = 0;

  for (int i = 0; i < len; i++) {
    if (str[i] == chr) {
      count++;
    }
  }

  printf("Frequency of character '%c' equals: %d\n", chr, count);

  return 0;
}

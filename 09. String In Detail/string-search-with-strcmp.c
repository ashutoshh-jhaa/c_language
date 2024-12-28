#include "stdio.h"
#include "string.h"

void trimSpaces(char str[]) {
  int len = strlen(str);
  while (len > 0 && (str[len - 1] == ' ' || str[len - 1] == '\n')) {
    str[len - 1] = '\0';
    len--;
  }
}

int main() {
  int n;
  printf("Enter the Number of Strings: \n");
  scanf("%d", &n);

  getchar();

  char strings[n][50];

  printf("Enter the Strings:\n");
  for (int i = 0; i < n; i++) {
    fgets(strings[i], 50, stdin);
    trimSpaces(strings[i]);
  }

  char searchStr[50];
  printf("Enter a string to search: \n");
  fgets(searchStr, 50, stdin);

  trimSpaces(searchStr);

  int found = 0;
  for (int i = 0; i < n; i++) {
    if (strcmp(strings[i], searchStr) == 0) {
      printf("String '%s' found at position %d\n", searchStr, i + 1);
      found = 1;
      break;
    }
  }

  if (!found) {
    printf("String '%s' NOT found\n", searchStr);
  }

  return 0;
}

#include <stdio.h>

int isAlphaNumeric(char str[]) {
  int i = 0;
  while (str[i] != '\0' && str[i] != '\n') {
    printf("%d = %c\n", i, str[i]);
    if (!((str[i] >= 'A' && str[i] <= 'Z') ||
          (str[i] >= 'a' && str[i] <= 'z') ||
          (str[i] >= '0' && str[i] <= '9'))) {
      return 0;
    }
    i++;
  }
  return 1;
}

int main() {
  char input[100];
  printf("Enter a string to check if it's alphanumeric:\n");
  fgets(input, 100, stdin);

  if (isAlphaNumeric(input)) {
    printf("The string is alphanumeric.\n");
  } else {
    printf("The string is NOT alphanumeric.\n");
  }
  return 0;
}

#include "stdio.h"
#include "string.h"

int hasSymbol(char str[], char sym) {
  if (strchr(str, sym) != NULL) {
    return 1;
  }
  return 0;
}

int main() {
  int n;
  printf("Enter the number of Emails : ");

  char num_str[10];
  fgets(num_str, sizeof(num_str), stdin);
  sscanf(num_str, "%d", &n);

  char emails[n][100];

  for (int i = 0; i < n; i++) {
    printf("Enter email %d: ", i + 1);
    fgets(emails[i], sizeof(emails[i]), stdin);

    int len = strlen(emails[i]);
    if (emails[i][len - 1] == '\n') {
      emails[i][len - 1] = '\0';
    }
  }

  printf("Emails with no @ symbol: \n");
  for (int i = 0; i < n; i++) {
    if (!hasSymbol(emails[i], '@')) {
      printf("%s\n", emails[i]);
    }
  }

  return 0;
}

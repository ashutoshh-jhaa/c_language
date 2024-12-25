#include "stdio.h"
#include "string.h"

void findVowels(char str[]) {
  printf("Vowels in \"%s\": ", str);
  int found = 0;
  int length = strlen(str);
  for (int i = 0; i < length; i++) {
    if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' ||
        str[i] == 'u' || str[i] == 'A' || str[i] == 'E' || str[i] == 'I' ||
        str[i] == 'O' || str[i] == 'U') {
      printf("%c ", str[i]);
      found = 1;
    }
  }
  if (!found) {
    printf("None");
  }
  printf("\n");
}

int main() {
  int n;
  printf("Enter the value of n: ");
  scanf("%d", &n);

  char names[n][50];
  getchar();
  for (int i = 0; i < n; i++) {
    printf("Enter name %d: ", i + 1);
    fgets(names[i], 50, stdin);

    int len = strlen(names[i]);
    if (names[i][len - 1] == '\n') {
      names[i][len - 1] = '\0';
    }
  }

  for (int i = 0; i < n; i++) {
    findVowels(names[i]);
  }

  return 0;
}

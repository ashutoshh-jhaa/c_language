#include "stdio.h"
#include "string.h"

int main() {
  int n;
  printf("Enter the Number of Strings : \n");
  scanf("%d", &n);
  getchar();

  char strings[n][50];

  for (int i = 0; i < n; i++) {
    fgets(strings[i], 50, stdin);

    int len = strlen(strings[i]);

    if (strings[i][len - 1] == '\n') {
      strings[i][len - 1] = '\0';
    }
  }

  for (int i = 0; i < n; i++) {

    for (int j = i + 1; j < n; j++) {
      if (strcmp(strings[i], strings[j]) > 0) {
        char temp[50];
        strcpy(temp, strings[i]);
        strcpy(strings[i], strings[j]);
        strcpy(strings[j], temp);
      }
    }
  }

  for (int i = 0; i < n; i++) {
    printf("%s\n", strings[i]);
  }
}

#include "stdio.h"
#include "string.h"

int srchStr(char strList[], char str[]) {
  int i = 0;
  while (strList[i] != '\0' && str[i] != '\0') {
    if (strList[i] != str[i]) {
      return 0;
    }
    i++;
  }

  return strList[i] == '\0' && str[i] == '\0';
}

int main() {
  char search[50];
  printf("Enter the string to search: ");
  fgets(search, 50, stdin);

  if (search[strlen(search) - 1] == '\n') {
    search[strlen(search) - 1] = '\0';
  }

  char strings[10][50] = {"ashutosh", "doe",      "john",  "jane", "tommy",
                          "snake",    "elephant", "mouse", "cpu",  "ram"};

  int found = 0;

  for (int i = 0; i < 10; i++) {
    if (srchStr(strings[i], search)) {
      found = 1;
      break;
    }
  }

  if (found) {
    printf("String was found\n");
  } else {
    printf("String wasn't found\n");
  }

  return 0;
}

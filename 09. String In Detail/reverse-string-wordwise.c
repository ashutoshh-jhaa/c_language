#include "stdio.h"
#include "string.h"

void swap(char str[], int start, int end) {
  for (; start < end; start++, end--) {
    char temp = str[start];
    str[start] = str[end];
    str[end] = temp;
  }
}

int main() {
  char string[100];
  printf("Enter any phrase: \n");
  fgets(string, 100, stdin);

  int len = strlen(string);
  if (string[len - 1] == '\n') {
    string[len - 1] = '\0';
    len--;
  }

  swap(string, 0, len - 1);

  int start = 0;
  for (int end = 0; string[end] != '\0'; end++) {

    if (string[end] == ' ' || string[end + 1] == '\0') {
      swap(string, start, (string[end] == ' ') ? end - 1 : end);
      start = end + 1;
    }
  }

  printf("Reversed string: %s\n", string);
  return 0;
}

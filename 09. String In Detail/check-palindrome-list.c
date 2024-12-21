#include "ctype.h"
#include "stdio.h"
#include "string.h"

void trimSpaces(char str[]) {
  int start = 0, end = strlen(str) - 1;

  if (str[end] == '\n') {
    str[end] = '\0';
    end--;
  }

  while (str[start] == ' ') {
    start++;
  }

  while (end >= start && str[end] == ' ') {
    end--;
  }

  int i = 0;
  for (; start <= end; start++, i++) {
    str[i] = str[start];
  }
  str[i] = '\0';
}

int checkPalindrome(char string[]) {
  trimSpaces(string);

  int len = strlen(string);
  int start = 0, end = len - 1;

  while (start < end) {
    if (tolower(string[start]) != tolower(string[end])) {
      return 0;
    }
    start++;
    end--;
  }
  return 1;
}

int main() {
  int n;
  printf("Enter the number of strings: \n");
  scanf("%d", &n);

  char strings[n][50];
  getchar();

  printf("Enter the strings:\n");
  for (int i = 0; i < n; i++) {
    fgets(strings[i], 50, stdin);
  }

  for (int i = 0; i < n; i++) {
    if (checkPalindrome(strings[i])) {
      printf("\"%s\" is a palindrome\n", strings[i]);
    } else {
      printf("\"%s\" is NOT a palindrome\n", strings[i]);
    }
  }
  return 0;
}

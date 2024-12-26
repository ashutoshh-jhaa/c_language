#include "stdio.h"
#include "string.h"

int isPalindrome(char str[]) {
  int start = 0, end = strlen(str) - 1;
  while (start < end) {
    if (str[start] != str[end]) {
      return 0;
    }
    start++;
    end--;
  }
  return 1;
}

int main() {
  int n;
  printf("Enter the Number of Words: ");
  scanf("%d", &n);
  getchar();

  char words[n][50];
  printf("Enter %d words:\n", n);

  for (int i = 0; i < n; i++) {
    fgets(words[i], 50, stdin);

    int len = strlen(words[i]);
    if (words[i][len - 1] == '\n') {
      words[i][len - 1] = '\0';
    }
  }

  printf("\nPalindrome Check:\n");
  for (int i = 0; i < n; i++) {
    if (strlen(words[i]) == 0) {
      printf("Empty string is NOT a palindrome\n");
    } else if (isPalindrome(words[i])) {
      printf("%s is a palindrome\n", words[i]);
    } else {
      printf("%s is NOT a palindrome\n", words[i]);
    }
  }

  return 0;
}

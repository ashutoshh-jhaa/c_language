#include <stdio.h>
#include <string.h>

int isPalindrome(char name[]) {
  int length = 0, i = 0;

  while (name[i] != '\n' && name[i] != '\0') {
    length++;
    i++;
  }
  if (name[i] == '\n') {
    name[i] = '\0';
  }

  for (i = 0; i < length / 2; i++) {
    if (name[i] != name[length - i - 1]) {
      return 0;
    }
  }
  return 1;
}

int main() {
  char name[50];
  printf("Enter any name: \n");
  fgets(name, 50, stdin);

  if (isPalindrome(name)) {
    printf("%s is a palindrome\n", name);
  } else {
    printf("%s is NOT a palindrome\n", name);
  }
  return 0;
}

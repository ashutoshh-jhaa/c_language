#include "stdio.h"
#include "string.h"

int hasSymbol(char email[], char sym) {
  int len = strlen(email);

  for (int i = 0; i < len; i++) {
    if (email[i] == sym) {
      return 1;
    }
  }
  return 0;
}

int main() {
  char email[100], symbol = '@';
  printf("Enter any Email Address : ");

  fgets(email, 100, stdin);

  email[strcspn(email, "\n")] = 0;

  (!hasSymbol(email, symbol)) ? printf("The given email does not have @")
                              : printf("The given email has @.");
}

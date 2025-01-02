// string with dynamic length
#include "stdio.h"
#include "stdlib.h"
int main() {
  char *str, c;
  str = (char*)malloc(sizeof(char));
  int i = 0, j = 1;

  while (c != '\n') {
    c = getc(stdin);
    j++;
    str = (char*)realloc(str, j * sizeof(char));
    str[i] = c;
    i++;
  }
  str[i] = '\0';
  free(str);
  printf("%s", str);
}
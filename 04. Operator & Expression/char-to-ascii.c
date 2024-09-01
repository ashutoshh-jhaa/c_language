// write a program to take char from the user and display it's ASCII value
#include "stdio.h"
int main() {
  char ch;
  printf("Enter any character : ");
  scanf("%c", &ch);
  printf("ASCII value of character %c is %d", ch, ch);
}
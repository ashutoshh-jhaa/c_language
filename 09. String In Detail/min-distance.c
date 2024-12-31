/*
You are given a list of strings and two specific strings. Your task is to
determine the number of words between these two strings in the list.

Example:
If the list is {"value1", "value2", "value3", "value4"} and the two strings are
"value1" and "value4", the output should be 2 because there are two words
("value2" and "value3") between them.
*/

#include "stdio.h"
#include "string.h"

int findDistance(char strings[][100], char w1[], char w2[], int len) {
  int first = -1, second = -1;

  for (int i = 0; i < len; i++) {
    if (strcmp(w1, strings[i]) == 0 && first == -1) {
      first = i;
    }
    if (strcmp(w2, strings[i]) == 0 && second == -1) {
      second = i;
    }

    if (first != -1 && second != -1) {
      break;
    }
  }

  if (first == -1 || second == -1) {
    printf("One or both words not found.\n");
    return -1;
  }

  if (first == second) {
    printf("Both words are the same. Distance is 0.\n");
    return 0;
  }

  int res = (first > second) ? first - second : second - first;
  return res - 1;
}

int main() {
  int n;
  printf("Enter the number of strings you want to enter: ");
  scanf("%d", &n);

  getchar();

  char strList[n][100];

  for (int i = 0; i < n; i++) {
    fgets(strList[i], 100, stdin);
    int len = strlen(strList[i]);
    if (strList[i][len - 1] == '\n') {
      strList[i][len - 1] = '\0';
    }
  }

  char word1[100], word2[100];
  printf("Enter the first word: ");
  scanf("%s", word1);
  printf("Enter the second word: ");
  scanf("%s", word2);

  int res = findDistance(strList, word1, word2, n);
  if (res >= 0) {
    printf("Distance: %d\n", res);
  } else {
    printf("Invalid input or words not found.\n");
  }

  return 0;
}

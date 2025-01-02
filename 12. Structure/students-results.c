#include "stdio.h"
#include "string.h"

struct Student {
  char name[50];
  int rollNum, maths, chem, phy;
};

void calRes(struct Student marks[], size_t size) {
  for (int i = 0; i < size; i++) {
    float percentage, total;
    total = marks[i].maths + marks[i].chem + marks[i].phy;

    percentage = total / 3.0;
    printf("\nPercentage for %s (Roll Number: %d): %.2f%%\n", marks[i].name,
           marks[i].rollNum, percentage);
  }
}
int main() {
  struct Student marks[5];

  for (int i = 0; i < 5; i++) {
    printf("Enter name of Student %d: \n", i + 1);
    fgets(marks[i].name, 50, stdin);
    int len = strlen(marks[i].name);
    if (marks[i].name[len - 1] == '\n') {
      marks[i].name[len - 1] = '\0';
    }

    printf("Enter Roll Number: \n");
    scanf("%d", &marks[i].rollNum);

    printf("Enter Maths Marks: \n");
    scanf("%d", &marks[i].maths);

    printf("Enter Chemistry Marks: \n");
    scanf("%d", &marks[i].chem);

    printf("Enter Physics Marks: \n");
    scanf("%d", &marks[i].phy);

    getchar();
  }

  printf("\n--- Student Results ---\n");
  calRes(marks, 5);

  return 0;
}

#include "stdio.h"
#include "string.h"

struct Emp {
  char name[50];
  int id;
  int salary;
};

void sort(struct Emp e[], size_t size) {
  struct Emp temp;

  for (int i = 0; i < size; i++) {
    for (int j = 0; j < size; j++) {
      if (e[i].salary < e[j].salary) {
        temp = e[i];
        e[i] = e[j];
        e[j] = temp;
      }
    }
  }
  printf("\nSorted Salaries:\n");
  for (int i = 0; i < 5; i++) {
    printf("Employee %d:\n", i + 1);
    printf("  Name   : %s\n", e[i].name);
    printf("  Salary : %d\n", e[i].salary);
    printf("\n");
  }
}

int main() {
  struct Emp e[5];

  for (int i = 0; i < 5; i++) {
    printf("Enter details for Employee %d:\n", i + 1);

    printf("Name: ");
    fgets(e[i].name, 50, stdin);
    size_t len = strlen(e[i].name);
    if (len > 0 && e[i].name[len - 1] == '\n') {
      e[i].name[len - 1] = '\0';
    }

    printf("ID: ");
    scanf("%d", &e[i].id);

    printf("Salary: ");
    scanf("%d", &e[i].salary);

    getchar();
  }

  printf("\nEmployee Details:\n");
  for (int i = 0; i < 5; i++) {
    printf("Employee %d:\n", i + 1);
    printf("  Name   : %s\n", e[i].name);
    printf("  Salary : %d\n", e[i].salary);
    printf("\n");
  }
  sort(e, 5);
  return 0;
}

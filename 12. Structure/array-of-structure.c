#include "stdio.h"

struct Emp {
  char name[50];
  int id;
  int salary;
};

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
    printf("  ID     : %d\n", e[i].id);
    printf("  Salary : %d\n", e[i].salary);
    printf("\n");
  }

  return 0;
}

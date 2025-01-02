/*Write a Program to create Student Record System for 3 students using
structure. Consider the below-mentioned attributes in the Student structure:
- stu_id
- stu_name
- stu_age
- stu_course
- stu_city
- stu_standard
- stu_school*/
#include <stdio.h>

struct Student {
  int stu_id;
  char stu_name[50];
  int stu_age;
  char stu_course[50];
  char stu_city[50];
  int stu_standard;
  char stu_school[50];
};

int main() {
  struct Student students[3];

  for (int i = 0; i < 3; i++) {
    printf("Enter details for student %d:\n", i + 1);
    printf("Student ID: ");
    scanf("%d", &students[i].stu_id);
    printf("Name: ");
    scanf("%s", students[i].stu_name);
    printf("Age: ");
    scanf("%d", &students[i].stu_age);
    printf("Course: ");
    scanf("%s", students[i].stu_course);
    printf("City: ");
    scanf("%s", students[i].stu_city);
    printf("Standard: ");
    scanf("%d", &students[i].stu_standard);
    printf("School: ");
    scanf("%s", students[i].stu_school);
    printf("\n");
  }

  printf("======Student Records:======\n\n");
  for (int i = 0; i < 3; i++) {
    printf("Student %d:\n", i + 1);
    printf("ID: %d\n", students[i].stu_id);
    printf("Name: %s\n", students[i].stu_name);
    printf("Age: %d\n", students[i].stu_age);
    printf("Course: %s\n", students[i].stu_course);
    printf("City: %s\n", students[i].stu_city);
    printf("Standard: %d\n", students[i].stu_standard);
    printf("School: %s\n", students[i].stu_school);
    printf("\n");
  }

  return 0;
}

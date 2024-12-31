#include <stdio.h>
#include <string.h>

#define MAX_USERS 3
#define MAX_LENGTH 50

struct user {
  char username[MAX_LENGTH];
  char pass[MAX_LENGTH];
};

void trimNewline(char* str) {
  size_t len = strlen(str);
  if (len > 0 && str[len - 1] == '\n') {
    str[len - 1] = '\0';
  }
}

int main() {
  struct user users[MAX_USERS];

  printf("Create user accounts:\n");
  for (int i = 0; i < MAX_USERS; i++) {
    printf("Enter username for user %d: ", i + 1);
    fgets(users[i].username, MAX_LENGTH, stdin);
    trimNewline(users[i].username);

    printf("Enter password for user %d: ", i + 1);
    fgets(users[i].pass, MAX_LENGTH, stdin);
    trimNewline(users[i].pass);

    printf("\n");
  }

  char name[MAX_LENGTH], pass[MAX_LENGTH];

  printf("\nLogin:\n");
  printf("Enter your username: ");
  fgets(name, MAX_LENGTH, stdin);
  trimNewline(name);

  printf("Enter your password: ");
  fgets(pass, MAX_LENGTH, stdin);
  trimNewline(pass);

  int authenticated = 0;
  for (int i = 0; i < MAX_USERS; i++) {
    if (strcmp(name, users[i].username) == 0 &&
        strcmp(pass, users[i].pass) == 0) {
      authenticated = 1;
      break;
    }
  }

  if (authenticated) {
    printf("Login successful! Welcome, %s.\n", name);
  } else {
    printf("Invalid username or password.\n");
  }

  return 0;
}

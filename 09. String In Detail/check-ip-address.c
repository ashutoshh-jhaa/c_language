#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>

int isValidOctet(const char* str) {
  int len = 0;
  while (str[len] != '\0') {
    if (!isdigit(str[len]))
      return 0;
    len++;
  }

  if (len == 0 || len > 3)
    return 0;

  int num = atoi(str);
  if (num < 0 || num > 255)
    return 0;

  if (len > 1 && str[0] == '0')
    return 0;

  return 1;
}

int isValidIPv4(const char* ip) {
  char buffer[100];
  int j = 0, octetCount = 0;

  for (int i = 0; ip[i] != '\0'; i++) {
    if (ip[i] == '.') {
      buffer[j] = '\0';
      if (!isValidOctet(buffer))
        return 0;
      j = 0;
      octetCount++;
    } else {
      buffer[j++] = ip[i];
      if (j >= sizeof(buffer))
        return 0;
    }
  }

  buffer[j] = '\0';
  if (!isValidOctet(buffer))
    return 0;

  octetCount++;
  return octetCount == 4;
}

int main() {
  const char* ip1 = "192.168.1.1";
  const char* ip2 = "256.100.50.25";
  const char* ip3 = "192.168..1";

  printf("Checking IP addresses:\n");
  printf("%s is %s\n", ip1, isValidIPv4(ip1) ? "valid" : "invalid");
  printf("%s is %s\n", ip2, isValidIPv4(ip2) ? "valid" : "invalid");
  printf("%s is %s\n", ip3, isValidIPv4(ip3) ? "valid" : "invalid");

  return 0;
}

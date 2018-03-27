#include <stdio.h>

int main(void) {
  char* ptr, str[200];
  int found_space = 1;
  printf("String: ");
  gets(str);
  ptr = str;
  while (*ptr) {
    if (found_space && *ptr != ' ') {
      *ptr += 'A' - 'a';
      found_space = 0;
    }
    else if (*ptr == ' ') {
      found_space++;
    }
    ptr++;
  }
  printf("Result: %s\n", str);
  return 0;
}

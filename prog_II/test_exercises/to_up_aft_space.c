#include <stdio.h>

void cvr_to_upper(char* arr);

int main(void) {
  char str[100];
  printf("Enter the string: ");
  gets(str);
  cvr_to_upper(str);
  printf("Result: %s\n", str);
  return 0;
}

void cvr_to_upper(char* arr) {
  int i = 0, found_space = 1;
  while (arr[i]) {
    if (found_space && arr[i] != ' ') {
      arr[i] += 'A' - 'a';
      found_space = 0;
    } else if (arr[i] == ' ')
        found_space++;
    i++;
  }
}

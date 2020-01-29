#include <stdio.h>
#include <string.h>

#define SIZE 20

char *alternateCase (char *string);

int main(void) {
  char string[SIZE];
  printf("Enter a string: ");
  fgets(string, SIZE, stdin);
  string[strlen(string) - 1] = '\0';
  printf("Result: %s\n", alternateCase(string));
  return 0;
}

char *alternateCase (char *string) {
int i = 0;
  while (string[i] != '\0') {
      if (string[i] >= 'A' && string[i] <= 'Z') {
        string[i] = tolower(string[i]);
      }
      else {
        string[i] = toupper(string[i]);
      }
      i++;
    }
    return string;
  }

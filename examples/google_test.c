#include <stdio.h>
#include <string.h>
#define SIZE 20

char look_for_recurring(char arr[]);

int main(void) {
  char string[SIZE];
  printf("%s", "Enter a string: ");
  fgets(string, 20, stdin);
  string[strlen(string) - 1] = '\0';
  printf("String length: %ld\n", strlen(string));
  char solution = look_for_recurring(string);
  if (solution != '\0') {
    printf("Your first recurring char is: %c\n", solution);
  }
  else {
    printf("No recurring char!\n");
  }
  return 0;
}

char look_for_recurring(char arr[]) {
  char tmp_char;
  int counter, lowest_position = SIZE;
  for (int i = 0; i < strlen(arr); i++) {
    tmp_char = arr[i];
    counter = i + 1;
    while (arr[counter] != '\0') {
      if (arr[counter] == tmp_char) {
        if (counter < lowest_position) {
        lowest_position = counter;
        }
      }
      counter++;
    }
  }
  if (lowest_position == SIZE) {
    return '\0';
  }
  return arr[lowest_position];
}

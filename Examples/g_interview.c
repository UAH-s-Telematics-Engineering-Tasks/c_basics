#include <stdio.h>
#include <string.h>

#define SIZE 20

void chk_repeats(char arr[]);

int main(void) {
  char string[SIZE];
  printf("Enter a string: ");
  fgets(string, SIZE, stdin);
  string[strlen(string) - 1] = '\0';
  chk_repeats(string);
  return 0;
}

void chk_repeats(char arr[]) {
  char tmp_char, max_char;
  int counter, curr_counter = 0;
  for (int i = 0; i < SIZE; i++) {
    tmp_char = arr[i];
    counter = 0;
    while (tmp_char == arr[i + counter]) {
      counter++;
    }
    if (counter > curr_counter) {
      max_char = tmp_char;
      curr_counter = counter;
    }
  }
  printf("The most repeated char is: %c. It was repeated %d times!\n", max_char, curr_counter);
}

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define SIZE 20

int check_for_0(char arr[]);

int main(void) {
  char word[SIZE];
  int zero;
  printf("Enter the number: ");
  fgets(word, 20, stdin);
  word[strlen(word) - 1] = '\0';
  zero = check_for_0(word);
  if (zero == 0) {
    printf("The number is: %d\n", zero);
    return 0;
  }
  double x = atof(word);
  if (x == 0.0) {
    printf("ERROR: Enter a real number!\n");
  }
  else {
    printf("The number is: %lf\n", x);
  }
  return 0;
}

int check_for_0(char arr[]) {
  int counter = 0;
  int condition = 0;
    while(condition < 2 && counter < strlen(arr)) {
      if (arr[counter] == '.') {
        condition++;
      }
      if (arr[counter] != '0' && arr[counter] != '.') {
      condition = 2;
    }
    counter++;
  }
  if (condition < 2) {
    return 0;
  }
  else {
    return -1;
  }
}

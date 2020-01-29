#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int nbDig(int n, int d);

int main(void) {
  int n, d;
  printf("Number: ");
  scanf("%d", &n);
  printf("Digit to look for: ");
  scanf("%d", &d);
  printf("Result: %d\n", nbDig(n, d));
  return 0;
}

int nbDig(int n, int d) {
  int counter = 0, n_digits;
  for (int i = 0; i < n + 1; i++) {
  if (i != 0) {
    n_digits = log10(pow(i, 2)) + 1;
  }
  else {
    n_digits = 1;
  }
  printf("n_digits: %d\n", n_digits);
  char* char_number = (char*) malloc (sizeof(char) * n_digits);
  sprintf(char_number, "%d", (int)pow(i, 2));
  printf("String: %s\n", char_number);
  printf("Strlen: %ld\n", strlen(char_number));
  for (int j = 0; j < strlen(char_number); j++) {
      if (char_number[j] - 48 == d) {
        counter++;
      }
    }
    free(char_number);
  }
  return counter;
}

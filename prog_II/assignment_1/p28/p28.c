#include <stdio.h>

int funarg2(void); //If we want it to work as expected: funarg2(int x);

int funarg2(void) { //If we want it to work as expected: funarg2(int x) {};
  int y;
  y = 5 + 4 * x;
  return y;
}

int main(void) {
  printf("The function returns: %d", funarg2(5 + 7));
}

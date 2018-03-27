#include <stdio.h>

int fun(void);

int fun(void) {
  return 2 * 5;
}

int main(void) {
  printf("\tThe function returns: %d\n", fun());
  return 0;
}

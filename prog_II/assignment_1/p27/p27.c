#include <stdio.h>

int funarg(int a);

int funarg(int a) {
  return a * a;
}

int main(void) {
  printf("\tThe function returns: %d\n", funarg(4));
  return 0;
}

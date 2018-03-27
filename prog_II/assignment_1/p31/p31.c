#include <stdio.h>

int funarg(int);

int funarg(int a) {
  a = a + 5;
  return a * a;
}

int main(void) {
  int a = 6, b = 2;
  printf("The function returns: %d\n", funarg(b));
  printf("The variable is: %d\n", a);
  return 0;
}

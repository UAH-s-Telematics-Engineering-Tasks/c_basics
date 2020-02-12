#include <stdio.h>

int funarg(int);

int funarg(int a) {
  return a * a;
}

int main(void) {
  int x = 3;
  funarg(x); // 9
  printf("The function returns: %d\n", funarg(x));
  printf("The variable is: %d\n", x);
  return 0;
}

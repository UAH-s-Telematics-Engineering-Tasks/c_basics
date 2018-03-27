#include <stdio.h>

int func(void);

int main(void) {
  int a = 1, x;
  x = func();
  x = func();
  x = func();
  return 0;
}

int func() {
  static int b = 1;
  b++;
  printf("b == %d\n", b);
  return b;
}

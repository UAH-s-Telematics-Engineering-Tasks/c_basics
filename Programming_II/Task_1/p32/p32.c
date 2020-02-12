#include <stdio.h>

int main(void) {
  int *punt;
  int x;
  int y;

  punt = &x;
  *punt = 4;
  punt = &y;
  *punt = 8;

  printf("%d,%d\n", x, y);
  return 0;
}

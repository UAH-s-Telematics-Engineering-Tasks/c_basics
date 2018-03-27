#include <stdio.h>

void swp(int*, int*);

int main(void) {
  int a = 1, b = 0;
  printf("Original values: a == %d \t b == %d\n", a, b);
  printf("==========\n");
  //We swap the values
  swp(&a, &b);
  printf("The new values are: a == %d \t b == %d\n", a, b);
  printf("=========\n");
  return 0;
}

void swp(int* x, int* y) {
  int tmp = *x;
  *x = *y;
  *y = tmp;
}

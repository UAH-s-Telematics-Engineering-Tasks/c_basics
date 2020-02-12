#include <stdio.h>

void foo(int, int, int*, int*);

int main(void) {
  int r_1, r_2, a, b;
  printf("Enter a and b (a,b): ");
  scanf("%d,%d", &a, &b);
  foo(a, b, &r_1, &r_2);
  printf("\n\tr_1: %d\n\tr_2: %d\n", r_1, r_2);
  return 0;
}

void foo(int a, int b, int* r_1, int* r_2) {
  *r_1 = a + b;
  *r_2 = b? a / b : 0;
}

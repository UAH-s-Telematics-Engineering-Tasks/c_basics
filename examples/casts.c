#include <stdio.h>

int main(void) {
  int j = 5;
  float k = 5.5;
  j = k;
  printf("%d\n", j);
  j = (int) k;
  printf("%d\n", j);
  return 0;
  printf("I should not be printed!\n");
}

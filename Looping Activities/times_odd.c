#include <stdio.h>

int main(void) {
  int total_1 = 1, total_2 = 1;
  for (int i = 1; i <= 15; i += 2) {
    total_1 *= i;
  }
  for (int i = 1; i <= 15; i ++) {
    if (i % 2 != 0) {
      total_2 *= i;
    }
  }
  printf("Total_1: %d\n", total_1);
  printf("Total_2: %d\n", total_2);
  return 0;
}

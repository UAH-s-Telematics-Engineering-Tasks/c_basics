#include <stdio.h>

int main(void) {
  int total_1 = 0, total_2 = 0;
  for (int i = 2; i <= 30; i += 2) {
    total_1 += i;
  }
  for (int i = 2; i <= 30; i++) {
    if (i % 2 == 0) {
      total_2 += i;
    }
  }
  printf("Total_1: %d\n", total_1);
  printf("Total_2: %d\n", total_2);
  return 0;
}

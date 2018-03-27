#include <stdio.h>

int main(void) {
  int n_times, array[5] = {0};
  printf("Number of iterations: ");
  scanf("%d", &n_times);
  for (int i = 0; i < n_times; i++)
    printf("%d\n", array[i]);
  return 0;
}

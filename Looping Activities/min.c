#include <stdio.h>


int main(void) {
  int n, curr_value, curr_min;
  printf("Number of elements to be used: ");
  scanf("%d", &n);
  for (int i = 0; i < n; i++) {
    printf("Enter an int: ");
    scanf("%d", &curr_value);
    if (i == 0) {
      curr_min = curr_value;
    }
    if (curr_value < curr_min) {
      curr_min = curr_value;
    }
  }
    printf("Minimum: %d\n", curr_min);
    return 0;
}

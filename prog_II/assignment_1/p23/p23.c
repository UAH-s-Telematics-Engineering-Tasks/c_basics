#include <stdio.h>

int main(void) {
  double F[3] = {3.2, 4.1, 5.3};
  double result_double = 0;
  for (int i = 0; i < sizeof(F) / sizeof(double); i++) {
    result_double += F[i];
  }
  printf("\nResult: %g\n\n", result_double);
  return 0;
}

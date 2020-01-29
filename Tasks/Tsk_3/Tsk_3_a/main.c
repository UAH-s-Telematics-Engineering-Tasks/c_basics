#include <stdio.h>

float power(float base, float exponent);
int factorial(int n);

int main(void) {
  float base, exponent;
  int choice = 0, n;
  while (choice != 3) {
    printf("Choose an option below: \n");
    printf("==========\n\n");
    printf("1 - Compute the power of a number\n");
    printf("2 - Compute the factorial of a number\n");
    printf("3 - Quit\n\n");

    printf("Choice: ");
    scanf("%d", &choice);

    if (choice == 1) {
      printf("\nThe base will be: ");
      scanf("%f", &base);
      printf("The exponent will be: ");
      scanf("%f", &exponent);
      printf("The power of %g to the %g is: %g\n\n", base, exponent, power(base, exponent));
    }
    else if (choice == 2) {
      do {
      printf("\nNumber to compute its factorial: ");
      scanf("%d", &n);
      if (n >= 16) {
        printf("The number is too large for our system!\n");
      }
      else if (n < 0) {
        printf("The number must be positive!\n");
      }
    } while (n < 0 || n >= 16);
      printf("The factorial of %d is: %d\n\n", n, factorial(n));
    }
  }
  return 0;
}

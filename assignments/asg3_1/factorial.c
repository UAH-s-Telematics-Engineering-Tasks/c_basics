#include <stdio.h>

int factorial(int n) {
  int counter = 1, comp = n;
  if (n == 0) {
    return 1;
  }
  int result = n;
  for (int i = 1; i < n; i++) {
     result *= (n-i)  /*result*/;
  }
  while (counter < n) {
    comp *= (n - counter);
    counter ++;
  }
  printf("Factorial with while: %d\n", comp);
  return result;
}

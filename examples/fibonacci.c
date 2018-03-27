#include <stdio.h>

void fibonacci(int n);

int main(void) {
  int n, key = 0;
  printf("Welcome to the Fibonacci calculator\n");
  printf("==========\n");
  do {
    printf("Position to compute: ");
    scanf("%d", &n);
    fibonacci(n);
    printf("\n");
    printf("Press 1 to continue: ");
    scanf("%d", &key);
  } while (key == 1);
  return 0;
}

void fibonacci(int num) {
  int a = 1, b = 0, r;
  for (int i = 0; i <= num; i++) {
    if (i == 0) {
      printf("0, ");
    }
    if (i == 1) {
      printf("1, ");
    }
    if (i > 1) {
      r = a + b;
      b = a;
      a = r;
      printf("%d, ", r);
    }
  }
}

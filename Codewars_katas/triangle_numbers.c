#include <stdio.h>

int sumTriangularNumbers(int n);

int main(void) {
  int number;
  printf("Enter a number: ");
  scanf("%d", &number);
  printf("Result: %d\n", sumTriangularNumbers(number));
  return 0;
}

int sumTriangularNumbers(int n)
{
int result = 0, tmp_value;
if (n < 0) {
  return 0;
  }
  for (int j = 1; j <= n; j++) {
    tmp_value = 0;
    for (int i = 1; i <= j; i++) {
      tmp_value += i;
      printf("tmp_value: %d\n", tmp_value);
    }
    result += tmp_value;
    printf("result: %d\n", result);
  }
  return result;
}

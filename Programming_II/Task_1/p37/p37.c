#include <stdio.h>

/* Using this structure made ot easier to compare the outcomes */

int main(void) {
  int option;
  int dividend;
  int divider = 0;
  do {
    printf("Int (1), float (2), or double (3) division?: ");
    scanf("%d", &option);
  } while (option < 1 || option > 3);
  switch (option) {
    case 1:
      printf("Result: %d\n", dividend / divider);
      break;
    case 2:
      printf("Result: %f\n", (float) dividend / (float) divider);
      //printf("I did not crash!!\n"); //Used to test the program
      break;
    case 3:
      printf("Result: %lf\n", (double) dividend / (double) divider);
      //printf("I did not crash!!\n"); //Used to test the program
      break;
  }
  return 0;
}

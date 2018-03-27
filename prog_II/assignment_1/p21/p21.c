#include <stdio.h>

#define GREEN "\x1b[32m"
#define RESET "\x1b[0m"
#define MAGENTA "\x1b[35m"

int main(void) {
  int integer = 10;
  char caharacter = 'q';
  float real_n = 3.2;
  double big_real_n = 4.1;

  printf("\nHello World!\n");
  printf("\n\t\tThese are the four basic var types in C: \n");
  printf("\n\t\t\t This is an int and its printed like: %d\n", integer);
  printf("\n\t\t\t This is a char and its printed like: %c\n", caharacter);
  printf("\n\t\t\t This is a float and its printed like: %g\n", real_n);
  printf("\n\t\t\t This is a double and its printed like: %lf\n", big_real_n);
  printf("\n\n");

  int int_result = 0;
  double doub_result = 0;
  int_result = integer + big_real_n; // Casting both arguments to int may be different
  doub_result = integer + big_real_n; //depending on the decimal part!!

  printf(GREEN "Int result:" RESET " %d\n" MAGENTA "Doub result: " RESET "%g\n\n", int_result, doub_result);

  /* The printf has an unexpected result. C arithmetic works in such a way that
  the result of the operation is of the "biggest" variable type. Every var is
  momentarily promoted to the largest variable type.  We are then saving a
  double inside an int, which is smaller. We will lose the decimal part
  and hence we will have 14 printed. It is like using c function floor(). In the
  second case, we will get the expected result, as a double is stored in a
  double, leading to no lose of information */

  return 0;
}

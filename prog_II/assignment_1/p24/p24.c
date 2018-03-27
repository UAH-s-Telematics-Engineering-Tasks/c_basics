#include <stdio.h>

#define GREEN "\x1b[32m"
#define RESET "\x1b[0m"
#define MAGENTA "\x1b[35m"
#define BLUE "\x1b[34m"
#define YELLOW "\x1b[33m"
/*#define TRUE 1
#define FALSE 0*/


int main(void) {
  double F[] = {3.2 ,4.1, 7.7, -2.4, 12.3, 5.3, -7.8, -1.2, -8.2, 5.3};
  double doub_result = 0;
  int size_of_F = sizeof(F) / sizeof(F[0]); //We will always know the number of elements
  for (int i = 0; i < size_of_F; i++) { //no matter if the type of elements in C
    doub_result += F[i];                                 //change!
  }
  printf(GREEN "\nSIGMA(F):" RESET " %g\n\n", doub_result);
  doub_result = 0;
  for (int i = 0; i < size_of_F; i++) {
    if (F[i] > 0) {
      doub_result += F[i];
    }
  }
  printf(MAGENTA "SIGMA(POS(F)):" RESET " %g\n\n", doub_result);
  doub_result = 0;
  for (int i = 0; i < size_of_F; i++) {
    if (F[i] < 0) {
      doub_result += F[i];
    }
  }
  printf(BLUE "SIGMA(NEG(F)):" RESET " %g\n\n", doub_result);

  int condition = 1, i = 0;
  doub_result = 0;

  while (i < size_of_F && condition) {
    if (F[i] > 0) {
      doub_result += F[i];
    } else if (F[i] < 0){
      condition = 0;
      //break; //We could also use a break statement here!
    }
    i++;
  }
  printf(YELLOW "Final result:" RESET " %g\n\n", doub_result);
  return 0;
}

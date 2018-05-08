#include <stdio.h>

float power(float base, float exponent) {
  float result = 1, comp = 1;
  int counter = 0;
  if (exponent < 0) {
    base = 1 / base;
    //printf("Base: %f\n", base); Used in debugging.
    for (int i = 0; i < (-exponent); i++) {
       result = base * result;
       //printf("Result: %f\n", result); Used in debugging.
    }
    while (counter < (-exponent)) {
      comp *= base;
      counter ++;
    }
  }
  if (exponent > 0) {
     for (int i = 0; i < exponent; i++) {
        result *= base /* result*/;
     }
     while (counter < exponent) {
       comp *= /*comp*/ base;
       counter ++;
     }
  }
  if (exponent == 0) {
    return 1;
  }
  printf("With while loops: %g\n", comp);
  return result;
}

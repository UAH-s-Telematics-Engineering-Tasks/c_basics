#include <stdio.h>

int main(void) {
  int* p = NULL;
  //int a;  //If these were uncommented,
  //p = &a; //It would work!
  *p = 6;
  return 0;
}

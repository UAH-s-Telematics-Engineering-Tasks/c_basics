#include <stdio.h>

int main(void) {
  char C[6];
  C[0] = 80; //P
  C[1] = 97; //a
  C[2] = 98; //b
  C[3] = 108; //l
  C[4] = 111; //o
  C[5] = 0; //'\0'
  //C[6] = ... It works, because the compiler reserves the next memory block just in case we do this by
  printf("My name is: %s\n", C); //Mistake
  return 0;
}

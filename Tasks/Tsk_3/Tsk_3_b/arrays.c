#include <stdio.h>

#define TOT 10

int main(void) {
  int numbers[TOT];
  for (int i = 0; i </*=*/ TOT; i++) {  //If we were to comment out the "=" sign, we would get a stack error, as the
    printf("Now we enter element number: %d\n", i);   //the last element introduced is outside of the array, messing up
    printf("Number: ");                               //the stack around it. Gcc outputs:
    scanf("%d", &numbers[i]);                         //*** stack smashing detected ***: ./a.out terminated, Aborted (core dumped)
  }
  printf("\n==========\n\n");
  for (int i = 0; i </*=*/ TOT; i++) { //If we were to comment out the "=" sign, we would see that the last element printed is
    printf("Number at index %d is: %d\n", i, numbers[i]); //a rubbish value, as we are addressing a memory location that has
  }                                                       //not been initilized. The index of the arrray points to an addrss relative
  printf("\n\n");                                         //to its beginning, so we can read further away from the bounds of an array.
  return 0;
}

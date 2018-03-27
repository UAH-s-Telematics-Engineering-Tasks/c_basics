#include <stdio.h>

int main(void) {
  int arr[5] = {1, 2, 3, 4, 5};
  //int arr[5]; WRONG!! We cannot redeclarate a variable or an array!!
  // arr[5] = {...}; WRONG!! Values can only be passed in initialization!!
  //                  Use a for loop!!
  return 0;
  int a = 3;
  float b = 9/3;

  //if (a == b) { //This could not work, a float may have some values at the end
    //TODO
  }
  if (a == (int)b) { //This works! We only look at the int part of b
    //TODO
  }
}

#include <stdio.h>

int main(void) {
  int i = 0;
  for(int i = 0; ; i++) { //infinite for loop, condition has to be empty.
    printf("%d\n", i);
  }
  while (1) {
    printf("%d\n", i++);
  }
}

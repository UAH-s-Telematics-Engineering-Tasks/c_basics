#include <stdio.h>

int main(void) {
  /*for (int i = 0; i == 2; i ++) {
    printf("%d\n", i);
  }*/
  int  total = 0;
  for ( int x = 100; x <= 150; x++ ) {
    total += x;
  }
  printf("%d\n", total);
  return 0;
}

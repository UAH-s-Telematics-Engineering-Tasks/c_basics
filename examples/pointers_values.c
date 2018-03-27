#include <stdio.h>

void swp(int a, int b);

int main (void) {

int x = 1, y = 0, tmp;

  /*tmp = x;
  x = y;
  y = tmp;*/

  swp(x, y);

  printf("In main().\n");
  printf("================\n");
  printf("x = %d \t y = %d \t tmp = %d \n", x, y, tmp);
  printf("================\n");

  return 0;
}

void swp(int a, int b) {
  int temp = a;
   a = b;
   b = temp;
   printf("In the function!\n");
   printf("================\n");
   printf("a = %d \t b = %d \t temp = %d \n", a, b, temp);
   printf("================\n\n");
}

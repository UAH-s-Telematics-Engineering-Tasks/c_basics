#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int randm();

int main(void) {
  int a, b, c;
  time_t seconds; //Var that holds time data
  seconds = time(NULL); //Gets system TIMESTAMP
  srand(seconds);//Initializes rand() with seconds; seconds is the seed.

  a = randm();
  printf("a == %d\n", a);
  b = randm();
  printf("b == %d\n", b);
  c = randm();
  printf("c == %d\n", c);
}

int randm () {
  int num = rand()%100;
  return num;
}

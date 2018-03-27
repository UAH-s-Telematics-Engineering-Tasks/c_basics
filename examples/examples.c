#include <stdio.h>

/* int main (void) {
  int x = 1;
  while (x <= 5) {
    printf("%d ", x++);
  }
  printf("\n");
} */

int main (void) {
  int x = 0;
  for (x = 'a'; x <= 'z'; x += 10) {
    printf("%c ", x);
  }
  printf("\n");
}

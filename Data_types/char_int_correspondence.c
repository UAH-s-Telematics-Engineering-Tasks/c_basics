#include <stdio.h>

int main(void) {
  char a;
  int n;
  scanf("%c", &a);
  //printf("%d\n", (int) a);
  printf("%d\n", a);
  scanf("%d", &n);
  printf("%c\n", (char) n);
  char c = a - (char) n;
  printf("%c\n", c + 48);
  printf("%d\n", c);
  return 0;
}

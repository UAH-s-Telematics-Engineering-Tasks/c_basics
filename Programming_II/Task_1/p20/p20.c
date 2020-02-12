#include <stdio.h>

#define GREEN "\x1b[32m" //Color Macros
#define RESET "\x1b[0m"
#define MAGENTA "\x1b[35m"

int main(void) {
  printf(GREEN "\nHello " RESET "World!\n\n");
  printf(MAGENTA "\t\t\t\tPablo!!\n" RESET);
  return 0;
}

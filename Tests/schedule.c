#include <stdio.h>

int main(void) {
  int h, m;
  while (1) {
  printf("Hora: ");
  scanf("%d:%d", &h, &m);
  if (h >= 9 && h <= 13 && m <= 30 && m >= 0 )
    printf("Abierto\n");
  else
    printf("Cerrado\n");
  }
  return 0;
}

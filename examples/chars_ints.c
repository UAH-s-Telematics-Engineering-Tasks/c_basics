#include <stdio.h>

int main(void) {
  int arr[] = {97, 98, 99};
  int a = '0';
  printf("%c\t", a);
  printf("%d\n", a);
  for (int i = 0; i < 3; i++) {
    printf("%c\t", arr[i]);
    printf("%d\n", arr[i]);
  }
  return 0;
}

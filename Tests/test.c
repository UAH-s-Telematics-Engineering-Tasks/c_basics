#include <stdio.h>

int main(void) {
  int arr[] = {1,2,4,5,6,5};
  int *p = arr;
  for (int i = 0; i < 6; i++)
    printf("%d ", *p++);
  printf("\n");
  return 0;
}

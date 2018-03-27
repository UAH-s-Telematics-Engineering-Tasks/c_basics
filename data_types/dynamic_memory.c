#include <stdio.h>
#include <stdlib.h>

int main(void) {
  size_t n_elms;
  int static_arr[10];
  int *dynamic_arr;
  printf("Number of elements: ");
  scanf("%ld", &n_elms);
  dynamic_arr = (int *) malloc(sizeof(int) * n_elms);
  if (dynamic_arr != NULL) {
    printf("Reading the array!\n");
    for (int i = 0; i < n_elms; i++) {
      printf("Value for position [%d]: ", i);
      scanf("%d", dynamic_arr + i);
    }
    printf("Printing the array!\n");
    for (int i = 0; i < n_elms; i++) {
      printf("Int at position [%d]: %d\n", i, *(dynamic_arr + i));
    }
  }
  else {
    printf("Error getting memory!\n");
    return -1;
  }
  free(dynamic_arr);
  return 0;
}

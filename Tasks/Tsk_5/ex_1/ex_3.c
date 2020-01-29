#include "headers.h"

int main(void) {
  int n = n_elms();
  int* arr = (int*) calloc(n, sizeof(int));
  get_data(arr, n);
  print_arr(arr, n);
  printf("Position to be removed: \n");
  int target_pos = get_int();
  printf("n_elms:%d\n", n);
  arr = remove_pos(arr, &n, target_pos);
  printf("n_elms:%d\n", n);
  print_arr(arr, n);
  free(arr);
  return 0;
}

int* remove_pos(int* arr, int* n_elms, int remove_pos) {
  int* aux_ptr = NULL;
  for (int i = remove_pos; i < (*n_elms); i++) {
    arr[i] = arr[i + 1];
  }
  aux_ptr = (int*) realloc(arr, sizeof(int) * (*n_elms - 1));
  if(aux_ptr != NULL) {
    printf("Item removed!\n");
    (*n_elms)--;
    return aux_ptr;
  }
  else {
    printf("Could not remve the item...\n");
    return arr;
  }
}

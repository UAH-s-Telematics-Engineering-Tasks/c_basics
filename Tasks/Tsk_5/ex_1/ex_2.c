#include "headers.h"

int main(void) {
  int* arr = NULL;
  int n_elms = 0;
  //n_elms = add_element_v1(&arr, n_elms);
  arr = add_element_v2(arr, &n_elms);
  print_arr(arr, n_elms);
  free(arr);
  return 0;
}

int add_element_v1(int** ptr, int n_elms) {
  int* aux_ptr;
  aux_ptr = (int*) realloc(*ptr, sizeof(int) * (n_elms + 1));
  if (aux_ptr != NULL) {
    if (aux_ptr != *ptr) {
      *ptr = aux_ptr;
      *(*ptr + n_elms) = get_int();
    }
    n_elms++;
  }
  else {
    printf("ERROR: No chunk of memory found!\n");
    return -1;
  }

  return n_elms;
}

int * add_element_v2(int* arr, int* n_elms) {
  int* local_ptr;
  local_ptr = (int*) realloc(arr, sizeof(int) * (*n_elms + 1));
  if (local_ptr != NULL) {
    local_ptr[*n_elms] = get_int();
    *n_elms += 1;
    return local_ptr;
  }
  else {
    printf("ERROR!\n");
    return arr;
  }
}

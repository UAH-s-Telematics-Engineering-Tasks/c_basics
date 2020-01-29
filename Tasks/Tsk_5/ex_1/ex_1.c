#include <stdio.h>
#include <stdlib.h>

int n_elms(void);
void get_data(int* arr, int n);
int get_int(void);
void print_arr(int* arr, int n);
void arr_w_malloc(void);
void arr_w_calloc(void);
void arr_w_realloc(void);
void crash_scenario(void);

int main(void) {
  printf("Malloc: \n");
  arr_w_malloc();
  printf("Calloc: \n");
  arr_w_calloc();
  printf("Realloc: \n");
  arr_w_realloc();
  printf("Crash!\n");
  // GCC let's us access memory even once it has been freed. If we do not overwrite it, we still have the data!
  crash_scenario();
  return 0;
}

void arr_w_malloc(void) {
  int* arr1;
  int n = n_elms();
  arr1 = malloc(sizeof(int) * n);
  get_data(arr1, n);
  print_arr(arr1, n);
  free(arr1);
}

void arr_w_calloc(void) {
  int* arr2;
  int n = n_elms();
  arr2 = calloc(n, sizeof(int));
  get_data(arr2, n);
  print_arr(arr2, n);
  free(arr2);
}

void arr_w_realloc(void) {
  int* arr3 = NULL;
  int n = n_elms();
  arr3 = realloc(arr3, sizeof(int) * n);
  get_data(arr3, n);
  print_arr(arr3, n);
  free(arr3);
}

void crash_scenario(void) {
  int* arr4;
  int n = n_elms();
  arr4 = calloc(n, sizeof(int));
  free(arr4);
  get_data(arr4, n);
  print_arr(arr4, n);
}

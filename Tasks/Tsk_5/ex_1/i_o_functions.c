#include "headers.h"

int get_int(void) {
  int n;
  printf("Enter a number: ");
  scanf("%d", &n);
  getchar();
  return n;
}

void print_arr(int* arr, int n) {
  for (int i = 0; i < n; i++) {
    printf("%d\n", arr[i]);
  }
}

void get_data(int* arr, int n) {
  for (int i = 0; i < n; i++) {
    arr[i] = get_int();
  }
}

int n_elms(void) {
  int n_elms;
  printf("Number of elements: ");
  scanf("%d", &n_elms);
  getchar();
  return n_elms;
}

#include <stdio.h>
#include <stdlib.h>

void populate_array(int* array, int size);
void print_array(int* array, int size);
void bubble_sort(int* array, int size);
void swap(int* x, int* y);

int main(void) {
  int n;
  int* array = NULL;
  printf("Welcome to our bubble sorter!\n");
  printf("Number of elements in the array: ");
  scanf("%d", &n);
  array = (int*) malloc(sizeof(int) * n);
  printf("Populate the array:\n");
  populate_array(array, n);
  print_array(array, n);
  bubble_sort(array, n);
  print_array(array, n);
  printf("Bye!\n");
  return 0;
}

void populate_array(int* array, int size) {
  for (int i = 0; i < size; i++) {
    printf("\tNumber for position %d: ", i);
    scanf("%d", array + i);
  }
}

void print_array(int* array, int size) {
  for (int i = 0; i < size; i++) {
    printf("%d ", *(array + i));
  }
  printf("\n");
}

void bubble_sort(int* array, int size) {
  for (int i = 0; i < size - 1; i++) {
    for (int k = 0; k < size - 1; k++) {
      if (*(array + k) > *(array + k + 1)) {
        swap(array + k, array + k + 1);
      }
    }
  }
}

void swap(int* x, int* y) {
  int tmp = *x;
  *x = *y;
  *y = tmp;
}

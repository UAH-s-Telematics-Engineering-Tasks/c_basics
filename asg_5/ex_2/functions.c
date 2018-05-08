#include "header.h"

int number_of_students(void) {
  int n_s;
  do {
  printf("Number of students to be read: ");
  n_s = get_int();
  } while (n_s < 0);
  return n_s;
}

//STATIC NAME

void init_array(record* arr, int n_elms) {
  for (int i = 0; i < n_elms; i++) {
    get_student(arr + i);
  }
}

void print_array(record* arr, int n_elms) {
  for (int i = 0; i < n_elms; i++) {
    print_student(*(arr + i));
  }
}

//DYNAMIC NAME

void dynamic_init_array(dyn_record* arr, int n_elms) {
  for (int i = 0; i < n_elms; i++) {
    dynamic_get_student(arr + i);
  }
}

void dynamic_print_array(dyn_record* arr, int n_elms) {
  for (int i = 0; i < n_elms; i++) {
    dyn_print_student(*(arr + i));
  }
}

void dynamic_free_memory(dyn_record* arr, int n_elms) {
  for (int i = 0; i < n_elms; i++) {
    free(arr[i].dyn_name);
  }
}

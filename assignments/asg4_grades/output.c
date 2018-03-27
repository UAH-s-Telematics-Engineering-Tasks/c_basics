#include "headers.h"

void print_struct(struct student curr_student) {
  printf("%s\t\t%s\t\t%g\n", curr_student.name, curr_student.ID, curr_student.grade);
}

void print_class(struct student arr[], int n) {
  printf("Name\t\tID\t\tGrade\n");
  printf("====\t\t==\t\t=====\n");
  for (int i = 0; i < n; i++) {
    print_struct(arr[i]);
  }
}

void print_some_space(void) {
  printf("\n\n\n");
}

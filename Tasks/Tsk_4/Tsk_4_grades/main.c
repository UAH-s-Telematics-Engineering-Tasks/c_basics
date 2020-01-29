#include "headers.h"

int main(void) {
  struct student class[MAX_STD];
  int students;
  printf("Welcome to our program!!\n");
  students = ask_for_data(class);
  if (students > 0) {
    print_some_space();
    print_class(class, students);
    print_some_space();
    compute_statistics(class, students);
  }
  printf("Good bye!!\n");
  return 0;
}

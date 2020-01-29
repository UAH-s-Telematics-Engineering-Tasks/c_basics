#include "header.h"

void get_string(char arr[]) {
  while(getchar()!='\n');
  fgets(arr, W_LEN, stdin);
  arr[strlen(arr) - 1] = '\0';
}

int get_int(void) {
  int n;
  scanf("%d", &n);
  return n;
}

float get_float(float* n) {
  scanf("%f", n);
}

//STATIC NAME

void get_student(record* student) {
  printf("Enter a name: ");
  get_string(student->name);
  printf("Grade: ");
  scanf("%f", &(student->grade));
}

void print_student(record student) {
  printf("Name: %s\n", student.name);
  printf("Mark: %g\n", student.grade);
}

//DYNAMIC NAME

void dynamic_get_student(dyn_record* student) {
  dyn_name(&(student->dyn_name));
  printf("Grade: ");
  scanf("%f", &(student->dyn_grade));
}

void dyn_name(char** str) {
  char tmp_name[W_LEN];
  printf("Enter a name: ");
  get_string(tmp_name);
  *str = (char*) malloc(sizeof(char) * (strlen(tmp_name ) + 1));
  strcpy(*str, tmp_name);
}

void dyn_print_student(dyn_record student) {
  printf("Name: %s\n", student.dyn_name);
  printf("Mark: %g\n", student.dyn_grade);
}

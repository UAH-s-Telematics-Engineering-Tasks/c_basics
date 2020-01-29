#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define W_LEN 30

typedef struct student {
  char name[W_LEN];
  float grade;
}record;

typedef struct dyn_student {
  char* dyn_name;
  float dyn_grade;
}dyn_record;

void get_string(char arr[]);
int get_int(void);
float get_float(float* n);
void get_student(record* student);
void print_student(record student);
int number_of_students(void);
void init_array(record* arr, int n_elms);
void print_array(record* arr, int n_elms);
void dynamic_get_student(dyn_record* student);
void dyn_name(char** str);
void dynamic_init_array(dyn_record* arr, int n_elms);
void dynamic_print_array(dyn_record* arr, int n_elms);
void dyn_print_student(dyn_record student);
void dynamic_free_memory(dyn_record* arr, int n_elms);

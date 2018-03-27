#include <stdio.h>
#include <string.h>

#define MAX_STD 100
#define STR_LEN 20
#define NUM_GRADES 5

struct student {
  char name[STR_LEN];
  char ID[STR_LEN];
  float grade;
};

int ask_for_data(struct student cls[]);
void read_student(struct student arr[], int num_elms);
void read_string(char arr[]);
struct student read_struct(void);
void print_struct(struct student curr_student);
void print_class(struct student arr[], int n);
void compute_statistics(struct student arr[], int num_elms);
void print_statistics(float avg, int arr[], int n);
void print_some_space();

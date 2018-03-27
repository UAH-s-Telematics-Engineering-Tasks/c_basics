#include <stdio.h>
#include <string.h>

#define MAX 2

struct data {
  int age;
  float mark;
};

struct student {
  char name[10];
  struct data stu_data;
};

void read_data_w_ptr(struct student* stru_ptr);
void print_data(struct student* stru_ptr);

int main(void) {
  struct student class[10];
  printf("Welcome!!\n");
  for (int i = 0; i < MAX; i++) {
    read_data_w_ptr(&class[i]);
  }
  for (int j = 0; j < MAX; j++) {
    print_data(&class[j]);
  }
}

void read_data_w_ptr(struct student* stru_ptr) {
  printf("Name: ");
  gets(stru_ptr->name);
  printf("Age: ");
  scanf("%d", &stru_ptr->stu_data.age);
  printf("Mark: ");
  scanf("%f", &stru_ptr->stu_data.mark);
  while(getchar() != '\n');
}

void print_data(struct student* stru_ptr) {
  printf("Name: %s\n", stru_ptr->name);
  printf("Age: %d\n", stru_ptr->stu_data.age);
  printf("Mark: %g\n", stru_ptr->stu_data.mark);
}

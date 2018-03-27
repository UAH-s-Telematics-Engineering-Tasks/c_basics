#include <stdio.h>
#include <string.h>

struct student {
  char name[15];
  int age;
  float mark;
};

void read_data(struct student arr[], int n);
void print_data(struct student arr[], int n);
int read_data_w_ptr(struct student* stru_ptr);

int main(void) {
  struct student class[10];
  printf("Welcome!!\n");
  for (int i = 0; i < 5; i++) {
    read_data(class, i); // read_data_w_ptr(&class[i]) == read_data_w_ptr(class + i)
  }
  for (int j = 0; j < 5; j++) {
    print_data(class, j);
  }
}

void read_data(struct student arr[], int n) {
  printf("Record: %d\n", n);
  printf("\tName: ");
  fgets(arr[n].name, 15, stdin);
  arr[n].name[strlen(arr[n].name) - 1] = '\0';
  printf("\tAge: ");
  scanf("%d", &arr[n].age);
  printf("\tMark:");
  scanf("%f", &arr[n].mark);
  getchar();
}

void print_data(struct student arr[], int n) {
  printf("Name: %s\n", arr[n].name);
  printf("Age: %d\n", arr[n].age);
  printf("Mark: %g\n", arr[n].mark);
}

int read_data_w_ptr(struct student* stru_ptr) {
  printf("Name: ");
  gets(stru_ptr->name);
  printf("Age: ");
  scanf("%d", &stru_ptr->age);
  printf("Mark: ");
  scanf("%f", &stru_ptr->mark);
  getchar(); //Clean the buffer!
  return 1; //Used for checking!
}

#include "headers.h"

int ask_for_data(struct student cls[]) {
  static int curr_students = 0;
  int total;
  do {
    printf("Students to be read: ");
    scanf("%d", &total);
  } while (total < 0 || (total + curr_students) > MAX_STD);
  //getchar();
  curr_students = total;
  read_student(cls, curr_students);
  return curr_students;
}

void read_student(struct student arr[], int num_elms) {
  for (int i = 0; i < num_elms; i++) {
    /*printf("Enter a name: ");
      read_string(arr[i].name);
      printf("Enter an ID: ");
      read_string(arr[i].ID);
      printf("Enter a grade: ");
      scanf("%f", &arr[i].grade);*/
    arr[i] = read_struct();
  }

}

void read_string(char arr[]) {
  getchar();
  fgets(arr, STR_LEN,  stdin);
  arr[strlen(arr) - 1] = '\0';
  //while(getchar() != '\n');
}

struct student read_struct(void) {
  struct student local;
  printf("Enter a name: ");
  read_string(local.name);
  printf("Enter an ID: ");
  read_string(local.ID);
  printf("Enter a grade: ");
  scanf("%f", &local.grade);
  return local;
}

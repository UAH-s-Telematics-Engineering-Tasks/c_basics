#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct data {
  int age;
  char name[20];
};

void write_struct(struct data* local);
void print_struct(struct data local);

int main(void) {
  struct data* ptr_arr;
  size_t n_elms;
  printf("Number of elements: ");
  scanf("%ld", &n_elms);
  ptr_arr = (struct data *) malloc(sizeof(struct data) * n_elms);
  if (ptr_arr != NULL) {
    printf("Let\'s write data!\n");
    for (int i = 0; i < n_elms; i++) {
      printf("Values for struct at [%d]: \n", i);
      write_struct(ptr_arr + i);
    }
    for (int i = 0; i < n_elms; i++) {
      printf("The values for struct at [%d] are: \n", i);
      print_struct(ptr_arr[i]);
    }
    ptr_arr = (struct data *) realloc(ptr_arr, (n_elms + 1) * sizeof(struct data));
    printf("Let\'s read for the newly created position!\n");
    printf("Values for struct at [%ld]\n", n_elms);
    write_struct(ptr_arr + n_elms);
    print_struct(ptr_arr[n_elms]);
  }
  else {
    printf("ERROR!\n");
    return -1;
  }
  free(ptr_arr);
  return 0;
}

void write_struct(struct data* local) {
  printf("Age: ");
  scanf("%d", &local->age);
  while(getchar() != '\n');
  printf("Name: ");
  fgets(local->name, 20, stdin);
  local->name[strlen(local->name) - 1] = '\0';
}

void print_struct(struct data local) {
  printf("Age: %d\n", local.age);
  printf("Name: %s\n", local.name);
}

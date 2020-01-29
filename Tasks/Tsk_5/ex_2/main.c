#include "header.h"

int main(void) {
  int n_students = number_of_students();
  //STATIC STRUCT
    //record* class;
    //class = (record*) malloc(sizeof(record) * n_students);
    //init_array(class, n_students);
    //print_array(class, n_students);

  //DYNAMIC STRUCT
    dyn_record* class;
    class = (dyn_record*) malloc(sizeof(dyn_record) * n_students);
    dynamic_init_array(class, n_students);
    dynamic_print_array(class, n_students);
    dynamic_free_memory(class, n_students);
  free(class);
  return 0;
}

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void) {
  char** array;
  char aux_str[20];
  int size;
  printf("Size of the main array: ");
  /*do {
    scanf("%d", &size);
    while(getchar() != '\n');
  } while (size < 1);
  array = (char**) malloc(size * sizeof(char*));
  for (int i = 0; i < size; i++) {
    printf("String to be entered: ");
    fgets(aux_str, 20, stdin);
    aux_str[strlen(aux_str) - 1]  = '\0';
    array[i] = (char*) malloc((strlen(aux_str) + 1) * sizeof(char));
    if (array[i] != NULL) {
      strcpy(array[i], aux_str);
    }
    else {
      printf("ERROR!!\n");
      return -1;
    }
  }*/
  printf("\n\n\n");
  for (int i = 0; i < size; i++) {
    printf("String at position %d: %s\n", i, array[i]);
  }
  for (int i = 0; i < size; i++) {
    free(array[i]);
  }
  free(array);
  return 0;
}

char** function_1(int* size) {
  char aux_arr[20], char** f_array;
  printf("Number of rows: ");
  scanf("%d", size);
  f_array = (char**) malloc(sizeof(char*) * (*size));
  if (f_array == NULL) {
    return NULL
  }
  else {
    for (int i = 0; i < size; i++) {
      printf("Enter a string: ");
      fgets(aux_str, 20, stdin);
      aux_str[strlen(aux_str) - 1] = '\0';
      f_array[i] = (char*) malloc(sizeof(char) * (strlen(aux_str) + 1));
      if (f_array[i] != NULL) {
        strcpy(f_array[i], aux_str);
      }
      else {
        printf("ERROR!!\n");
        f_array[i] = NULL;
      }
    }
  }
  return f_array;
}

void function_2(char*** ptr, int rows) {
  char aux_str[20];
  char** array = *ptr;
  array = (char**) malloc(sizeof(char*) * rows);
  if (array != NULL) {
    for (int i = 0; i < rows; i++) {
      printf("Enter a string: ");
      fgets(aux_str, 20, stdin);
      aux_str[strlen(aux_str) - 1] = '\0';
      array[i] = (char*) malloc((strlen(aux_str) + 1) * sizeof(char));
      if (array[i] != NULL) {
        strcpy(array[i], aux_str);
      }
      else {
        printf("ERROR!!\n");
        array[i] = NULL;
      }
    }
  }
  *ptr = array;
}

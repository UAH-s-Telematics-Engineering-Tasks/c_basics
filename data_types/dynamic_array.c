#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void) {
  char* array[100];
  char aux_str[80];
  int rows;
  do {
    printf("Number of rows: ");
    scanf("%d", &rows);
    while(getchar() != '\n');
  } while (rows > 100 || rows < 1);
  for (int i = 0; i < rows; i++) {
    printf("String to be entered: ");
    fgets(aux_str, 80, stdin);
    aux_str[strlen(aux_str) - 1] = '\0';
    array[i] = (char*) malloc((strlen(aux_str) + 1) * sizeof(char));
    if (array[i] == NULL) {
      printf("ERROR!\n");
      return -1;
    }
    else {
      strcpy(array[i], aux_str);
    }
  }
  printf("\n\n\n");
  for (int i = 0; i < rows; i++) {
    printf("String at position %d: %s\n", i, array[i]);
  }
  for (int i = 0; i < rows; i++) {
    free(array[i]);
  }
  return 0;
}

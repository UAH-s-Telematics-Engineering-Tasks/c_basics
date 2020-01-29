#include <stdio.h>

#define ROWS 3
#define COLS 3

void print_board(char [][COLS]) {
  for (int i = 0; i < ROWS; i++) {
    printf("_ _ _ \n");
    for (int j = 0; j < ROWS; j++) {
      printf("|%c|%c|%c|", arr[i][j]);
    }
    printf("\n");
  }
  printf("_ _ _ \n");
}

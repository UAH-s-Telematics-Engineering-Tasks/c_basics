#include <stdio.h>
#include <string.h>

#define ROWS 3
#define COLS 3

int validate(char arr[][COLS], int x, int y) {
  if (arr[x][y] == 'X' || arr[x][y] == 'O') {
    return 0;
  }
  else {
    return 1;
  }
}

void show_board(char arr[][COLS]) {
  for (int i = 0; i < ROWS; i++) {
    printf("--  --  --\n");
    for (int j = 0; j < COLS; j++) {
      printf("|%c|", arr[i][j]);
    }
    printf("\n");
  }
  printf("--  --  --\n");
}

int chk_win(char arr[][COLS], char token) {
  for (int i = 0; i < COLS; i++) {
    for (int j = 0; j < COLS; j++) {
      //char chk_cols = arr[j][i];
      if (token != arr[j][i]) {
        break;
      }
      else if (j == 2){
        return 1;
      }
    }
    for (int k = 0; k < ROWS; k++) {
      //char chk_rows = arr[i][k];
      if (token != arr[i][k]) {
        break;
      }
      else if (k == 2) {
        return 1;
      }
    }
  }
  for (int m = 1; m < COLS; m++) {
    if (arr[m][m] != token) {
      break;
    }
    else if (m == 2) {
      return 1;
    }
  }
  for (int n = 1; n < COLS; n++) {
    if (arr[n][COLS - n + 1] != token) {
      break;
    }
    else if (n == 2){
      return 1;
    }
  }
  return 0;
}

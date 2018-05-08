#include <stdio.h>

#define ROWS 3
#define COLS 3

int finished(char arr[][COLS], char token) {
  int chk_1, chk_2;
  for (int i = 0; i < COLS; i++) {
    for (int j = 0; j < ROWS; j++) {
      if (arr[j][i] != token) {
        break;
      }
      else if (j == 2) {
        return 1;
      }
    }
    for (int k = 0; k < COLS; k++) {
      if (arr[i][k] != token) {
        break;
      }
      else if (k == 2) {
        return 1;
      }
    }
  }
  for (int m = 0; m < ROWS; m++) {
    if (arr[m][m] == token) {
      chk_1++;
    }
    else if (arr[m][2 - m] == token) {
      chk_2++;
    }
    else if (chk_1 == 3 || chk_2 == 3) {
      return 1;
    }
  }
  return 0;
}

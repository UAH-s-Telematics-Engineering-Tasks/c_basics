#include <stdio.h>

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

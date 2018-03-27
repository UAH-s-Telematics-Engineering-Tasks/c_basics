#include "header.h"

int number_of_rows_and_cols(void) {
  int n;
  do {
  printf("Number of rows and columns (Must be odd): ");
  scanf("%d", &n);
  } while (n < 1 || n % 2 != 1);
  return n;
}

char** create_board(int n) {
  char** local_ptr;
  local_ptr = (char**) malloc(sizeof(char*) * n);
  for (int i = 0; i < n; i++) {
    local_ptr[i] = (char*) malloc(sizeof(char) * n);
  }
  return local_ptr;
}

int validate(char** board, int x, int y) {
  if (board[x][y] == 'X' || board[x][y] == 'O') {
    return 0;
  }
  else {
    return 1;
  }
}

void show_board(char** arr, int n) {
  for (int i = 0; i < n; i++) {
    for (int i = 0; i < n; i++) {
      printf("--");
    }
    printf("\n|");
    for (int j = 0; j < n; j++) {
      printf("%c|", arr[i][j]);
    }
    printf("\n");
  }
  for (int i = 0; i < n; i++) {
    printf("--");
  }
  printf("\n");
}

int chk_win(char** arr, char token, int n) {
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      if (token != arr[j][i]) {
        break;
      }
      else if (j == n - 1){
        return 1;
      }
    }
    for (int k = 0; k < n; k++) {
      if (token != arr[i][k]) {
        break;
      }
      else if (k == n - 1) {
        return 1;
      }
    }
  }
  for (int m = 1; m < n; m++) {
    if (arr[m][m] != token) {
      break;
    }
    else if (m == n - 1) {
      return 1;
    }
  }
  for (int l = 1; l < n; l++) {
    if (arr[l][n - l + 1] != token) {
      break;
    }
    else if (l == n - 1){
      return 1;
    }
  }
  return 0;
}

void free_memory(char** arr, int board_size) {
  for (int i = 0; i < board_size; i++) {
    free(arr[i]);
  }
  free(arr);
}

void fill_w_spaces(char** board, int n) {
  for (int i = 0; i < n; i++) {
    memset(board[i], INIT_CHAR, sizeof(char) * n);
  }
}

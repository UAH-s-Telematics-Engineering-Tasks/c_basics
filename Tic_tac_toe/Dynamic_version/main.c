#include "header.h"

int main(void) {
  char** board;
  char token;
  int turn_order = 0, player, x, y;
  int board_size = number_of_rows_and_cols();
  board = create_board(board_size);
  fill_w_spaces(board, board_size);
  //show_board(board, board_size);
  printf("Welcome to our game!\n");
  do {
    if (turn_order % 2 == 0) {
      token = 'O';
      player = 1;
    }
    else {
      token = 'X';
      player = 2;
    }
    do {
      printf("Player %d (%c), input position (x, y): ", player, token);
      scanf("%d,%d", &x, &y);
    } while (x < 0 || y < 0 || x > (board_size - 1) || y > (board_size - 1));
    if (!validate(board, x, y)) {
      printf("The cell is already occupied!!\n");
    }
    else {
      board[x][y] = token;
      turn_order++;
    }
    show_board(board, board_size);
  } while (!chk_win(board, token, board_size));
printf("Player %d (%c) wins!!\n", player, token);
printf("Thanks for playing!!\n");
free_memory(board, board_size);
  return 0;
}

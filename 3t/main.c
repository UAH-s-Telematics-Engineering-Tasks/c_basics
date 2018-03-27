#include <stdio.h>
#include <string.h>

#define ROWS 3
#define COLS 3
#define INIT_CHAR 32

int validate(char arr[][COLS], int x, int y);
void show_board(char arr[][COLS]);
int chk_win(char arr[][COLS], char token);

int main(void) {
  char board[ROWS][COLS], token;
  int turn_order = 0, player, x, y;
  memset(board, INIT_CHAR, sizeof(board)); //Initialize the board!
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
    } while (x < 0 || y < 0 || x > (ROWS - 1) || y > (COLS - 1));
    if (!validate(board, x, y)) {
      printf("The cell is already occupied!!\n");
    }
    else {
      board[x][y] = token;
      turn_order++;
    }
    show_board(board);
  } while (!chk_win(board, token));
printf("Player %d (%c) wins!!\n", player, token);
printf("Thanks for playing!!\n");
  return 0;
}

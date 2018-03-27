#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define INIT_CHAR 32 //White Space

int number_of_rows_and_cols(void);
char** create_board(int n);
int validate(char** board, int x, int y);
void show_board(char** arr, int n);
int chk_win(char** arr, char token, int n);
void free_memory(char** arr, int board_size);
void fill_w_spaces(char** board, int n);

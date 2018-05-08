#include<stdio.h>
#include<string.h>

#define ROWS 3
#define COLS 3

int valid(char [][COLS],int , int );
int finished(char [][COLS], char );
void print_board(char [][COLS]);

int main()
{

char board[ROWS][COLS];
char car;

int i, j, x, y, player;

 memset(board, 32, sizeof(board));
 i=0;
 do{
	if(i%2 == 0)
		car='0';
    player = 1;
	else
		car='X';
    player = 2;
	do{
		printf("%c, type the number of the cell to update(x,y): ", car);
		scanf("%d,%d", &x, &y);
	}while(x<0 || x>ROWS-1|| y<0 || y>COLS-1);
	if(!valid(board,x,y))
          	printf("Occupied, try again.\n");
	else{
		board[x][y]=car;
		i++;
    	}
    	print_board(board);
 }while(!finished(board, car));
 printf("Player %d (%c) WINS!!\n", player, car);


return 0;
}

void print_board(char arr[][COLS]) {
  int j;
  for (int i = 0; i < ROWS; i++) {
    printf("________\n");
    for (int j = 0; j < ROWS; j++) {
      printf("|%c|", arr[i][j]);
    }
    printf("\n");
  }
  printf("________\n");
}

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

int valid(char arr[][COLS], int x, int y) {
  if (arr[x][y] == 'X' || arr[x][y] == 'O') {
    return 0;
  }
  else {
    return 1;
  }
}

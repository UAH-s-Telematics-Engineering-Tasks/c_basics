#include <stdio.h>
//#include <math.h>

int menu(void);
void pattern1(int);
void pattern2(int);
void pattern3(int);
void pattern4(int);
void pattern5(int);

int main(void) {
  int rows, option, okay;
  option = menu();
  while (option != 6) {
    switch (option) {
      case 1:
        printf("Number of rows: ");
        scanf("%d", &rows);
        pattern1(rows);
        break;
      case 2:
        printf("Number of rows: ");
        scanf("%d", &rows);
        pattern2(rows);
        break;
      case 3:
        printf("Number of rows: ");
        scanf("%d", &rows);
        pattern3(rows);
        break;
      case 4:
        printf("Number of rows: ");
        scanf("%d", &rows);
        pattern4(rows);
        break;
      case 5:
        do {
        printf("Number of rows (Odd number in 1 - 21): ");
        scanf("%d", &rows);
        if (rows % 2 == 1 && (1 <= rows) && (rows <= 21)) {
          okay = 0;
        }
        else {
          okay = 1;
        }
      } while (okay != 0);
        pattern5(rows);
        break;
      }
      option = menu();
  }
  return 0;
}

int menu(void) {
  int opt;
    do {
      printf("Choose a pattern to be printed (1 - 5). Option 6 quits the program!: ");
      scanf("%d", &opt);
    } while (opt < 1 || opt > 6);
    return opt;
}
void pattern1(int rows) {
  for (int i = 0; i < rows; i++) {
      int n = i;
    for (int j = 0; j <= n; j++) {
      printf("*");
    }
    printf("\n");
  }
}

void pattern2(int rows) {
  for (int i = 0; i < rows; i++) {
      int n = i;
    for (int j = rows; j > n; j--) {
      printf("*");
    }
    printf("\n");
  }
}

void pattern3(int rows) {
  for (int i = 0; i < rows; i++) {
    int n = i;
    for (int k = 0; k < n; k++) {
      printf(" ");
    }
      for (int j = rows; j > n; j-- ) {
        printf("*");
      }
    printf("\n");
  }
}

void pattern4(int rows) {
  for (int i = 0; i < rows; i++) {
    int n = i;
    for (int k = rows; k > (n + 1); k--) {
      printf(" ");
    }
      for (int j = 0; j <= n; j++ ) {
        printf("*");
      }
    printf("\n");
  }
}

void pattern5(int rows) {
  for (int i = 0; i < rows; i++) {
    int n = 2 * i + 1;
    int m = i;
    if (i >= (rows / 2 + 1)) {
      m = i - 2 * (i - /*4*/ rows / 2);
      n = 2 * (i - 2 * (i - rows / 2)) + 1; // n = 2 * (rows - i ) + 1
    }
    for (int j = (rows / 2); j > m; j--) {
      printf(" ");
    }
    for (int k = 0; k < n; k++) {
      printf("*");
    }
    /*for (int l = (rows / 2); l > n; l--) {
      printf(" ");
    }*/
    printf("\n");
  }
}

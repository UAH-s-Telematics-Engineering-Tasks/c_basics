#include <stdio.h>

/* 2's complement checker*/

int c2(int n);

int main(void){
  int num, key;
  do {
  printf("2\'s complement checker\n");
  printf("==========\n");
  printf("Please enter a number: ");
  scanf("%d", &num);
  int result = c2(num);
  printf("Your negative number is: %d\n", result);
  printf("==========\n");
  printf("Press 1 for using it again: ");
  scanf("%d", &key);
  printf("\n\n\n");
      } while (key == 1);
  return 0;
}

int c2(int n) {
  int neg = (~n) + 1;
  return neg;
}

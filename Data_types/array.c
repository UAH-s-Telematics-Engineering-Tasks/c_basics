/*
  First example
*/
#include <stdio.h>

int main() {
  char word[30];
  int i;
  printf("Hello, I'm an exmple program!\n");
  printf("Input a word to get its word length: ");
  scanf("%s", &word[30]);
  /*for (i = 0; i < 59; i++){
    if (word[i] != '\0') {
      break;
    }
    if (i == 59) {
      printf("You didn't input anything!\n");
      return 0;
    }
  }*/
  printf("%s \n", &word[30]);
  return 0;
}

#include "header.h"

int menu(void) {
  int n;
  printf("1- String -> Coded String\n");
  printf("2- Coded String -> Readable String\n");
  printf("3- Clear the screen\n");
  printf("4- Exit\n");
  do {
    n = get_int("Enter an option: ");
  } while (n < 1 || n > 4);
  return n;
}

char* human_2_crypto(char* input, int key, int out_mode) { //TODO Check key function!!
  char* p = (char*) malloc(sizeof(char) * (strlen(input) + 1));
  for (int i = 0; i < strlen(input); i++) {
    p[i] = (~input[i]) + key;
    if (out_mode == 1)
      printf("%d\n", p[i]);
  }
  p[strlen(p)] = '\0';
  if (out_mode == 2)
    printf("Coded string: %s\n", p);
  return p;
}

void crypto_2_human(char* input, int key) {//TODO Check key function!!
  char* p = (char*)malloc(sizeof(char) * (strlen(input) + 1));
  for (int i = 0; i < strlen(input); i++) {
    p[i] = ~(input[i] - key);
  }
  p[strlen(p)] = '\0';
  printf("Decoded string: %s\n", p);
  free(p);
}

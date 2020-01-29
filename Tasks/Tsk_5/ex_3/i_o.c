#include "lib_prot.h"

void get_string(char* target, const char* msg, int size) {
  //while(getchar() != '\n'); //Clean the buffer!
  printf("%s", msg);
  fgets(target, size, stdin);
  target[strlen(target) - 1] = '\0';
}

int get_int(const char* msg) {
  int n;
  printf("%s", msg);
  scanf("%d", &n);
  getchar();
  return n;
}

float get_float(const char* msg) {
  float n;
  printf("%s", msg);
  scanf("%f", &n);
  getchar();
  return n;
}

char get_char(const char* msg) {
  char c;
  //while(getchar() != '\n');
  printf("%s", msg);
  c = getchar();
  getchar();
  return c;
}

void print_some_space(void) {
  printf("\n\n\n");
}

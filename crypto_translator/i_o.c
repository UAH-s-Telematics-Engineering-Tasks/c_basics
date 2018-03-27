#include "header.h"

int get_int(const char* msg) {
  int n, chk;
  char buffer_dump[5];
  do {
    printf("%s", msg);
    chk = scanf("%d", &n);
    if (chk == 0)
      gets(buffer_dump);
  } while (chk != 1);
  return n;
}

void get_string(char* target, const char* msg, int size) {
  printf("%s", msg);
  while(getchar() != '\n');
  fgets(target, size, stdin);
  target[strlen(target) - 1] = '\0';
}

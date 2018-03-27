#include <stdio.h>
#include <string.h>

void get_string(char* str, const char* msg);
void str_copier(char* a, char* b, char ctrl);

int main(void) {
  char str_a[20], str_b[20], ctrl;
  get_string(str_a, "String A: ");
  //get_string(str_b, "String B: ");
  printf("Control char: ");
  ctrl = getchar();
  str_copier(str_a, str_b, ctrl);
  printf("Str B: %s\n", str_b);
  return 0;
}

void get_string(char* str, const char* msg) {
  printf("%s", msg);
  fgets(str, 20, stdin);
  str[strlen(str) - 1] = '\0';
}

void str_copier(char* a, char* b, char ctrl) {
  int cond = 1, i = 0;
  while (a[i] && cond) {
    if (a[i] == ctrl)
      cond = 0;
    else
      b[i] = a[i];
    i++;
  }
}

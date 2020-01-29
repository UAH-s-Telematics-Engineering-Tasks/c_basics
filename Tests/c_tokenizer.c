#include <stdio.h>
#include <string.h>

int main(void) {
  char stra[] = ",Token,Token";
  char strb[] = "Token";
  char strc[] = ",";
  char delim[] = ",";
  char* token = NULL;
  token = strtok(stra, delim);
  while (token) {
    printf("Token: %s\n", token);
    token = strtok(NULL, delim);
  }
  printf("STR2\n");
  token = strtok(strb, delim);
  while (token) {
    printf("Token: %s\n", token);
    token = strtok(NULL, delim);
  }

  token = strtok(strc, delim);
  //printf("%s\n", token);  //ERROR!
  if (!token)
    printf("We are right!\n");
  return 0;
}

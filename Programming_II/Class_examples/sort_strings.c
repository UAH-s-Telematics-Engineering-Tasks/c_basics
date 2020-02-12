#include <stdio.h>
#include <string.h>

int main(void) {
  char arr[10][40];
  char* paux;
  char* p[10];
  int n = 0;
  for (int i = 0; i < 10; i++) {
    p[i] = arr[i];
  }
  printf("Enter strings (EOF = ctrl + D): ");
  for (int i = 0; i < 10; i++) {
    n = i;
    if(gets(arr[i]) == NULL) { // CTRL + d makes gets() return NULL
      break;                   // gets() doesn't check bounds!
    }
  }
  for (int i = 0; i < n - 1; i++) { // BUBBLE SORT (It is the slowest sorting algorithm...)
    for (int k = i + 1; k < n; k++) {
      if (strcmp(p[i], p[k]) > 0) { // if char1 > char2 then char1 is after char2 alphabetically!
        paux = p[i];
        p[i] = p[k];
        p[k] = paux;
      }
    }
  }
  printf("Alfabetically sorted: \n");
  for (int i = 0; i < n; i++) {
    printf("%s\n", p[i]);
  }
  printf("Original array: \n");
  for (int i = 0; i < n; i++) {
    printf("%s\n", arr[i]);
  }
  return 0;
}

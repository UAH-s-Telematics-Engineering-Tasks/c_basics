#include <stdio.h>
#include <string.h>

char* arbitrate(const char* input, int len, char input_cpy[]);

int main(void) {
  int size;
  printf("Size: ");
  scanf("%d", &size);
  getchar();
  char arr[size];
  char input_cpy[size];
  printf("Array: ");
  fgets(arr, size, stdin);
  arr[strlen(arr) - 1] = '\0';
  printf("Result: %s\n", arbitrate(arr, (int) strlen(arr), input_cpy));
  return 0;
}

char* arbitrate(const char* input, int len, char input_cpy[]){
  int position = 0;
  while (input[position] != '1' && input[position] != '\0') {
    position++;
  }
 for (int i = 0; i < len; i++) {
  if (i == position) {
    input_cpy[i] = '1';
  }
  else {
    input_cpy[i] = '0';
  }
 }
 //printf("input_cpy: %s\n", input_cpy);
 return input_cpy;
}

char* arbitrate(const char* input, int len){
    int position = 0;
    while (input[position] != '1' && input[position] != '\0') {
      position++;
  }
  //char input_cpy[len];
  char * input_cpy = (char *) calloc(len + 1, 1);
  int i = 0;
  while (i < len) {
    if (i == position) {
      input_cpy[i] = '1';
    }
    else {
      input_cpy[i] = '0';
    }
    i++;
   }
   return input_cpy;
 }//With calloc!

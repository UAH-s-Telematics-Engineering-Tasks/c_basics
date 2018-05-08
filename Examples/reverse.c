#include <stdio.h>
#include <string.h>

#define SIZE 30

void reverse(char arr[]);

int main(void) {
  char str[SIZE];
  printf("Welcome to our reverser!\n");
  printf("Input a string: ");
  fgets(str, SIZE, stdin);
  str[strlen(str) - 1] = '\0';
  printf("Our string is %s\n", str);
  printf("str.length: %ld\n", strlen(str));
  printf("Let\'s reverse it!\n");
  reverse(str);
  printf("String reversed: %s\n", str);
}

void reverse(char arr[]) {
  char tmp_char;
  for (int i = 0; i < (strlen(arr) / 2) ; i++) {
    tmp_char = arr[i];
    arr[i] = arr[strlen(arr) - (i + 1)];
    arr[strlen(arr) - (i + 1)] = tmp_char;
  }
  //printf("Half step: %s\n", arr);               /* Used
  /*if (strlen(arr) % 2 == 0) {                         in
    printf("We got there!\n");                             debugging!*/ /*
    tmp_char = arr[(strlen(arr) / 2) - 1];
    arr[(strlen(arr) / 2) - 1] = arr[(strlen(arr) / 2)];
    arr[(strlen(arr) / 2)] = tmp_char;
  }*/
}

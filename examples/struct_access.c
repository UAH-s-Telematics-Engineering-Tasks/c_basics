#include <stdio.h>
#include <string.h>

#define MAX 10

struct example {
  char arr[MAX];
};

int main(void) {
  struct example exmp = {"Hello"};
  printf("%s\n", exmp.arr); //Hello
  exmp.arr[1] = '0';
  printf("%s\n", exmp.arr); //H0llo
  printf("Address: %p\n", exmp.arr);
  printf("Length: %ld\n", strlen(exmp.arr)); //5
  printf("Size of char: %ld\n", sizeof(exmp.arr[0])); //1
  printf("Size of array: %ld\n", sizeof(exmp.arr)); //10
  return 0;
}

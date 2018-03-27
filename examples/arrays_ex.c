#include <stdio.h>
#include <string.h>
#define SIZE 5

int main(void) {
  int arr[SIZE], brr[SIZE];
  printf("Lets enter some numbers!\n");
  printf("==========\n");
  for (int i = 0; i < SIZE; i++) {
    printf("Enter number for position %d: ", i);
    scanf("%d", &arr[i]);
  }

  memcpy(brr, arr, sizeof(arr));

  //copy option 2

  /*for (int i = 0; i < SIZE; i++) {
    brr[i] = arr[i];
  }*/

  //printf("\n==========\n");
  printf("\nLet\'s print the array!\n");
  printf("==========\n");
  for (int i = 0; i < SIZE; i++) {
    printf("Position %d: %d\n", i, arr[i]);
  }
  printf("\nLet\'s print the copy of the original array!");
    printf("\n==========\n");
  for (int i = 0; i < SIZE; i++) {
    printf("Position %d: %d\n", i, brr[i]);
  }
  //printf("%d\n", arr[SIZE]);  Rubish Value
  printf("\nSize of arr: %ld\n", sizeof(arr));
}

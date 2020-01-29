#include <stdio.h>
#define SIZE 100

void sort_arr(int n, int arr[]);
int look_for(int size, int n, int arr[]);

int main(void) {
  int n, arr[SIZE], obj;
  printf("Welcome to our number seacher!\n");
  do {
  printf("Input how many numbers you want us to go through (MAX = 100): ");
  scanf("%d", &n);
} while (n >100);
  for (int i = 0; i < n; i++) {
    printf("Number for position %d: ", i);
    scanf("%d", &arr[i]);
  }
  printf("Let\'s sort the array\n");
  sort_arr(n, arr);
  printf("Value you want to look for: ");
  scanf("%d", &obj);
  int result = look_for(n, obj, arr);
  if (result == -1) {
    printf("The desired number is not in the array!\n");
  }
  else {
    printf("The number is at the position %d in the array!\n", result);
  }
  return 0;
}

void sort_arr(int n, int arr[]) {
  for (int i = 1; i < n; i++) {
    int j = i - 1;
    int tmp_value = arr[i];
    while ((arr[j] > tmp_value) && (j >= 0)) {
      arr[j + 1] = arr[j];
      j--;
    }
    arr[j + 1] = tmp_value;
  }
  /*printf("\nThe sorted array is: \n");
  for (int i = 0; i < n; i++) {
    printf("Position %d: %d\n", i, arr[i]);
  }*/
}

int look_for(int size, int n, int arr[]) {
  int bottom = 0;
  int top = size - 1;
  while (bottom <= top) {
    int middle = (bottom + top)/2;
    if (n > arr[middle]) {
      bottom = middle + 1;
    }
    if (n < arr[middle]) {
      top = middle - 1;
    }
    if (n == arr[middle]) {
      return middle;
    }
  }
  if (bottom > top) {
  return -1;
  }
}

#include <stdio.h>
#define SIZE 100

void sort_arr(int n, int arr[]);

int main(void) {
  int n, arr[SIZE];
  printf("Welcome to the number sorter!\n");
  do {
  printf("Input how many numbers you want us to sort (MAX = 100): ");
  scanf("%d", &n);
} while (n >100);
  for (int i = 0; i < n; i++) {
    printf("Number for position %d: ", i);
    scanf("%d", &arr[i]);
  }
  printf("\nLet\'s read that array.\n");
  for (int i = 0; i < n; i++) {
    printf("Position %d: %d\n", i, arr[i]);
  }
  sort_arr(n, arr);
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
  printf("\nThe sorted array is: \n");
  for (int i = 0; i < n; i++) {
    printf("Position %d: %d\n", i, arr[i]);
  }
}

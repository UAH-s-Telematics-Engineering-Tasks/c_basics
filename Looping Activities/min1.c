#include <stdio.h>
#define MAX 25

int insertion(int arr[], int n_elms);

int main(void) {
  int n, min;
  int arr[MAX];
  printf("Input how many integers you want to use (MAX 25): ");
  scanf("%d", &n);
  for (int i = 0; i < n; i++) {
    printf("Enter an int: ");
    scanf("%d", &arr[i]);
  }
  printf("Let\'s order the array and get the MIN\n");
  min = insertion(arr, n);
  printf("Minimum value: %d\n", min);
  return 0;
}

int insertion(int arr[], int n_elms) {
  for (int i = 0; i < n_elms; i++) {
      int aux_index = i - 1;
      int tmp_value = arr[i];
      while (tmp_value < arr[aux_index] && aux_index >= 0) {
        arr[aux_index + 1] = arr[aux_index];
        aux_index--;
      }
      arr[aux_index + 1] = tmp_value;
  }
  for (int i = 0; i < n_elms; i++) {
    printf("%d\t", arr[i]);
  }
  printf("\n");
  return arr[0];
}

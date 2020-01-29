#include "main.h"

int menu(void) {
  int opt;
  do {
    //printf("\n");
    printf("Main Menu\n");
    printf("=========\n");
    printf("\t1. Enter array\n");
    printf("\t2. Print array\n");
    printf("\t3. Sort array\n");
    printf("\t4. Look for an element in the array\n");
    printf("\t5. Add a new element to the array\n");
    printf("\t6. Modify an element in the array\n");
    printf("\t7. Clear the screen\n");
    printf("\t8. Quit\n");
    printf("\nSelect an option: ");
    scanf("%d", &opt);
    //clear();
  } while(opt < 0 || opt > 8);
  return opt;
}

int write_arr(int arr[]) {
  int val = 0;
  int values_to_be_read;
  do {
    printf("Values to be entered: ");
    //do {
    int x = scanf("%d", &values_to_be_read);
  //} while (x != 1);
  } while(values_to_be_read < 0 || values_to_be_read > 10);
  for (int i = 0; i < values_to_be_read; i++) {
    printf("Value for position %d: ", i);
    /*int check =*/ scanf("%d", &arr[i]);
    /*if (check == 1) {
      val++;
    }*/
  }
  return values_to_be_read;
}

void show_arr(int arr[], int arr_size) {
  for (int i = 0; i < arr_size; i++) {
    printf("Element at postion %d: %d\n", i, arr[i]);
  }
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

int add_element_arr(int pos, int arr[], int value_to_be_read) {
  if (pos > SIZE - 1) {
    printf("Error: The array is full!\n");
    return -1;
  }
  else {
    arr[pos] = value_to_be_read;
    return 1;
  }
}

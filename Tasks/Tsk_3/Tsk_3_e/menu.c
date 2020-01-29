#include "main.h"

int menu(void);
int write_arr(int arr[]);
void show_arr(int arr[], int arr_size);
void sort_arr(int n, int arr[]);
int look_for(int size, int n, int arr[]);
int add_element_arr(int pos, int arr[], int value_to_be_read);


int main(void) {
  int arr[SIZE], n_elms, wanted_value, wanted_value_pos;
  int value_to_be_read, checker, target, new_value;
  int option = menu();
  while (option != QUIT) {
    switch (option) {
      case 1:
        printf("\n");
        printf("Let\'s enter the array!\n");
        n_elms = write_arr(arr);
        //printf("Number of elements: %d\n", n_elms);
        break;
      case 2:
        printf("\n");
        printf("Let\'s show that array!\n");
        show_arr(arr, n_elms);
        break;
      case 3:
        printf("\n");
        printf("Let\'s sort that array!\n");
        sort_arr(n_elms, arr);
        break;
      case 4:
        printf("\n");
        printf("Let\'s sort and look for a number in that array!\n");
        sort_arr(n_elms, arr);
        printf("What value do you want to look for: ");
        scanf("%d", &wanted_value);
        wanted_value_pos = look_for(n_elms, wanted_value, arr);
        if (wanted_value_pos != -1) {
        printf("The result is at position %d in the array!\n", wanted_value_pos);
        }
        else {
          printf("The value is not in the array!\n");
        }
        break;
      case 5:
        printf("\n");
        printf("Let\'s change an element in that array!\n");
        printf("Enter the desired number: ");
        scanf("%d", &value_to_be_read);
        checker = add_element_arr(n_elms, arr, value_to_be_read);
        if (checker == 1) {
          printf("Change done correctly!\n");
          n_elms++;
        }
        else if (checker == -1) {
          printf("There was an error when reading the value...\n");
        }
        break;
      case 6:
        printf("\n");
        printf("Let\'s modify a value!\n");
        printf("Value to modify: ");
        scanf("%d", &target);
        sort_arr(n_elms, arr);
        wanted_value_pos = look_for(n_elms, target, arr);
        if (wanted_value_pos == -1) {
          printf("The value is not in our array...\n");
          break;
        }
        printf("We found the number! Enter the new value: ");
        scanf("%d", &new_value);
        add_element_arr(wanted_value_pos, arr, new_value);
        break;
      case 7:
          clear();
          break;

    }
    option = menu();
  }
  printf("Bye!!\n");
  return 0;
}

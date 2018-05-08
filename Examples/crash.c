#include <stdio.h>

int write_arr(int arr[]) {
  int val = 0,x;
  char array[10];
  int values_to_be_read;
  do {
    printf("Values to be entered: ");
    do {
    x = scanf("%d", &values_to_be_read);
    if (x==0) //If scanf went wrong
      gets(array);   //Put whatever is in the buffer into array, so we "clean" it. If the buffer has something, it won't ask us for data, it alrady has something.
  } while (x != 1); //Call scanf again.
  } while(values_to_be_read < 0 || values_to_be_read > 10);
  for (int i = 0; i < values_to_be_read; i++) {
    printf("Value for position %d: ", i);
    scanf("%d", &arr[i]);


  }
  return values_to_be_read;
}

int main()
{
  int matrix[10];
  write_arr(matrix);
  return 0;
}

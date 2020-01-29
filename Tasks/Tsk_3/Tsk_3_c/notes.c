#include <stdio.h>

#define SIZE 9

void sort_amount_into_notes(int amount, int notes[]);

int main(void) {
  int out = 1, chk;
  char array[SIZE];
  int notes[SIZE] = {500, 200, 100, 50, 20, 10, 5, 2, 1};
  int amount;
  printf("Welcome to our amount-to-notes converter!\n");
  printf("==========\n");
  printf("Input the desired amount, please (No cents): ");
  scanf("%d", &amount);
  if (amount < 0) {
    printf("Error: The amount must be a positive integer!!\n");
    return -1;
  }
  sort_amount_into_notes(amount, notes);
  do {
    do {
    printf("Type 0 to exit: ");
    chk = scanf("%d", &out);
    if (chk != 1) {
      gets(array); //We read buffer data onto array so that the program doesn't chrash!
    }
  } while (chk != 1); //Check everything went ok, else, read input again!
    if(out == 0) {
      return 0;
    }
  } while (out); //Check this loop!! If out != 0 it goes infinite!!
}

void sort_amount_into_notes(int amount, int notes[]) {
  for (int i = 0; i < SIZE; i++) {
    int num_notes = amount / notes[i];
    if (num_notes != 0) {
    printf("Number of %d notes/coins: %d\n", notes[i], num_notes);
  }
    amount -= /*amount -*/ num_notes * notes[i];
    //printf("Current amount: %d\n", amount);
  }
}

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define W_LEN 20
#define DIC_LEN 100
#define clear() printf("\033[H\033[J")

typedef struct word_pair {
  char *spanish;
  char *english;
}pair;

int add_word(struct word_pair** ptr, int num);
int menu(void);
void get_string(char** arr);
void print_dict(struct word_pair dict[], int num_elms);


int main(void) {
  struct word_pair* dictionary = NULL;
  int n_elms = 0;
  int option = menu();
  while (option != 5) {
  switch (option) {
    case 1:
      n_elms = add_word(&dictionary, n_elms);
      break;
    case 4:
      print_dict(dictionary, n_elms);
      break;
    }
    option = menu();
  }
  for(int i = 0; i < n_elms; i++) {
    free((dictionary + i)->english);
    free((dictionary + i)->spanish);
  }
  free(dictionary);
  return 0;
}

int add_word(struct word_pair** ptr, int num) {
  struct word_pair* ptr_aux = NULL;
  int additions;
  printf("Elements to add: ");
  scanf("%d", &additions);
  getchar();
  ptr_aux = (struct word_pair*) realloc(*ptr, sizeof(struct word_pair) * (num + additions));
  if (ptr_aux != NULL) {
    if (ptr_aux != *ptr) {
      *ptr = ptr_aux;
    }
  }
  else {
    printf("\nERROR: No chunk of data found!");
  }
  for (int i = num; i < (additions + num); i++) {
    printf("Enter the word in English and then in Spanish");
    get_string(&((*ptr + i)->english));
    get_string(&((*ptr + i)->spanish));
  }
  return num + additions;
}

int menu(void) {
  int opt;
  do {
  //clear();
  printf(
          "1- Add a word\n"
          "2- Translate a word\n"
          "3- Show the dictionary\n"
          "4- Clear the screen\n"
          "5- Exit\n");
  printf("Choose an option (0-4): ");
  scanf("%d", &opt);
  } while (opt < 0 || opt > 5);
  return opt;
}

void get_string(char** arr) {
  int size;
  char* aux = *arr;
  printf("\nSize of the name: ");
  scanf("%d", &size);
  getchar();
  printf("Word: ");
  aux = (char*) malloc(sizeof(char) * (size + 2));
  fgets(aux, size + 2, stdin);
  //printf("%s\n", *arr);
  aux[strlen(aux) - 1] = '\0';
  //printf("%s\n", *arr);
  *arr = aux;
}

void print_dict(struct word_pair dict[], int num_elms) {
  printf("Spanish\t\tEnglish\n");
  printf("=======\t\t=======\n");
  for (int i = 0; i < num_elms; i++) {
    printf("%s\t\t%s\n", dict[i].spanish, dict[i].english); //pointers to beginning of spanish string in struct at dict[i]
  }
}

#include "headers.h"

void format_string(char arr[]) {
  arr[strlen(arr) - 1] = '\0';
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

int add_word(struct word_pair dict[], int num_elms) {
  getchar(); //clean the buffer!
  if (num_elms >= DIC_LEN) {
    printf("The dictionary is full...");
  }
  else {
    printf("Enter the word in Spanish: ");
    fgets(dict[num_elms].spanish, W_LEN, stdin); //dict[num_elms].spanish == *(dict + num_elms).spanish ==
    format_string(dict[num_elms].spanish); // == pointer to spanish string in struct at address dict + num_elms
    printf("Enter the translation in English: ");
    fgets(dict[num_elms].english, W_LEN, stdin);
    format_string(dict[num_elms].english);
    num_elms++;
  }
  return num_elms;
}

void translate_word(struct word_pair dic[], int num_elms) {
  getchar();//Clean the buffer!
  char original[W_LEN];
  printf("Enter a word to be translated: ");
  fgets(original, W_LEN, stdin);
  format_string(original);
  for (int i = 0; i < num_elms; i++) {
    if (strcmp(dic[i].english, original) == 0) {
      printf("Your word in Spanish is: %s\n", dic[i].spanish);
    }
    else if (strcmp(dic[i].spanish, original) == 0) {
      printf("Your word in English is: %s\n", dic[i].english);
    }
    else if (i == num_elms) {
      printf("The word is not in the dictionary...\n");
    }
  }
}

void print_dict(struct word_pair dict[], int num_elms) {
  printf("Spanish\t\tEnglish\n");
  printf("=======\t\t=======\n");
  for (int i = 0; i < num_elms; i++) {
    printf("%s\t\t%s\n", dict[i].spanish, dict[i].english); //pointers to beginning of spanish string in struct at dict[i]
  }
}

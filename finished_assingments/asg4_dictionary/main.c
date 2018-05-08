#include "headers.h"

int main(void) {
  struct word_pair dictionary[DIC_LEN] = {0};
  int menu_choice, current_elms = 0;
  menu_choice = menu();
  while (menu_choice != 5) {
    switch (menu_choice) {
      case 1:
        current_elms = add_word(dictionary, current_elms);
        //printf("Current number of elements: %d\n", current_elms); //Debugging!
        break;
      case 2:
        printf("Let\'s translate a word!\n");
        translate_word(dictionary, current_elms);
        break;
      case 3:
        printf("Let\'s print the dictionary!\n");
        print_dict(dictionary, current_elms);
        break;
      case 4:
        clear();
        system("clear"); //It's the same as the above!
        break; //Not necessary
    }
    menu_choice = menu();
  }
  printf("Good bye!\n");
  return 0;
}

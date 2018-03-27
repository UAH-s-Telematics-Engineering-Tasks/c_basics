#include "header.h"

int main(void) {
  printf("Welcome to our crypto translator!\n");
  int option = menu();
  while (option != 4) {
    switch (option) {
    case 1:
      ; //Empty statement, prevents a grammar error by which a label (case 1) can't be followed by a declaration (char ...)
      char input[20];//It has to be followed by a statement, and declaration != statement
      get_string(input, "Input string: ", 20);
      int output_mode = get_int("Output mode (1 -> binary, 2 -> string): ");
      char* out = human_2_crypto(input, get_int("Key (Don\'t forget it!): "), output_mode);
      break;
    case 2:
      ;
      //char output[20];
      char input_translator[20];
      strcpy(input_translator, out);
      //get_string(output, "Input string: ", 20);
      crypto_2_human(input_translator, get_int("Key you used before: "));
      break;
    case 3:
      system("clear");
      free(out);
    }
    option = menu();
  }
  return 0;
}

#include <stdio.h>
#include <string.h>

#define N 100
#define REPS 3

enum season_colour {
  white,
  black,
  blue_navy,
  red
};

typedef struct clothes {
  int code;
  char description[N];
  enum season_colour colour;
  float price;
} Clothing;

struct clothes read_values();
void read_values_1(struct clothes *PtrStr);
void print_struct(struct clothes *PtrSt);
void print_struct_value(struct clothes tag);
int look_for(char arr[], struct clothes data[], int num_elms);

int main() {
  char target[N];
  struct clothes database[N];
  for (int i = 0; i < REPS; i++) {
    database[i] = read_values(); //read_values_1(&database[i]);
  }
  for (int i = 0; i < REPS; i++) {
    print_struct_value(database[i]);
  }
  getchar(); //Clean the buffer!!
  printf("Description to look for: ");
  fgets(target, N, stdin);
  target[strlen(target) - 1] = '\0';
  int search = look_for(target, database, REPS);
  if (search == -1) {
    printf("Search failed...\n");
  }
  else {
    printf("The description is at struct in position: %d\n", search);
  }
  /*struct clothes skirt1 = read_values();
  printf("Let\'s print it: \n");
  printf("========================\n");
  print_struct(&skirt1);
/*Debugging*/
  //char array[N];
  //gets(array);
  //printf("What is in array?: %s\n", array);
/*Debugging*/
  /*printf("Let\'s read with function 2\n");
  printf("========================\n");
  read_values_1(&skirt1);
  printf("Let\'s print it: \n");
  printf("========================\n");
  print_struct_value(skirt1);*/

  return 0;
}

struct clothes read_values() {
  struct clothes local;
  char car;
  printf("Enter the code: ");
  scanf("%d", &local.code);
  getchar(); //clean the buffer!
  printf("Description: ");
  fgets(local.description, N, stdin);
  local.description[strlen(local.description) - 1] = '\0';
  printf("Enter a colour (0-3): ");
  scanf("%d", (int *) &local.colour);
  printf("Price: ");
  scanf("%f", &local.price);
  return local;
}

void read_values_1(struct clothes *PtrStr) {
  printf("Code: ");
  scanf("%d", &PtrStr->code);
  printf("Description: ");
  getchar(); //clean the buffer!
  fgets(PtrStr->description, N, stdin);
  PtrStr->description[strlen(PtrStr->description) - 1] = '\0';
  printf("Color (0-3): ");
  scanf("%d", (int *) &PtrStr->colour);
  printf("Price: ");
  scanf("%f", &PtrStr->price);
}

void print_struct(struct clothes* PtrSt) {
  printf("Code: %d\nDescription: %s\nColour: %d\nPrice: %g\n\n",
                                                PtrSt->code,
                                                PtrSt->description,
                                                PtrSt->colour,
                                                PtrSt->price);
}

void print_struct_value(struct clothes tag) {
  printf("Code: %d\nDescription: %s\nColour: %d\nPrice: %g\n\n",
                                                tag.code,
                                                tag.description,
                                                tag.colour,
                                                tag.price);
}

int look_for(char arr[], struct clothes data[], int num_elms) {
  for (int i = 0; i < num_elms; i++) {
    if (strcmp(data[i].description, arr) == 0) {
      return i;
    }
  }
  return -1;
}

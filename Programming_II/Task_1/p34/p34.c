#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define NAME_SIZE 15
#define C_SIZE 2 //Number of students to be read
#define ERROR "\x1b[31m" //Red color for error
#define RESET "\x1b[0m"

typedef struct {
  char name[NAME_SIZE];
  int file_number;
  float mark;
}student;

void get_data(student* arr);
void get_string(char* str, const char* msg);
int get_int(const char* msg);
float get_float(const char* msg);
int menu(void);
void show_data(student* arr, int option);

int main(void) {
  student class[C_SIZE];
  get_data(class);
  system("clear"); //Only works under Linux and osX
  //system("cls"); //Uncomment if using windows!
  int choice = menu();
  while (choice != 4) {
    show_data(class, choice);
      choice = menu();
    }
    printf("Bye!!\n");
  return 0;
  }

void get_data(student* arr) { // Use an independent size element!! Functions should be independent!!
  for (int i = 0; i < C_SIZE; i++) {
    get_string(arr[i].name, "Name of student: ");
    arr[i].file_number = get_int("File number: ");
    arr[i].mark = get_float("Mark: ");
  }
}

void get_string(char* str, const char* msg) {
  printf("%s", msg);
  fgets(str, NAME_SIZE, stdin);
  str[strlen(str) - 1] = '\0'; //We remove the '\n'
}

int get_int(const char* msg) {
  int n;
  printf("%s", msg);
  scanf("%d", &n);
  while (getchar() != '\n'); //Clean stdin buffer!
  return n;
}

float get_float(const char* msg) {
  float f;
  do {
    printf("%s", msg);
    scanf("%f", &f);
    if (f < 0 || f > 10)
      printf(ERROR "\nERROR: Not a real mark!!\n\n" RESET);
  } while (f < 0 || f > 10); //Checks we are getting a real mark
  while (getchar() != '\n'); //Clean stdin buffer!
  return f;
}

int menu(void) {
  int option, error = 0;
  do {
    if (error)
    printf(ERROR "\nERROR: Wrong option!!\n\n" RESET);
    printf("1 - List names\n");
    printf("2 - List file numbers\n");
    printf("3 - List marks\n");
    printf("4 - Exit\n");
    option = get_int("Choose an option: ");
    error = 1;
  } while(option < 1 || option > 4);
  return option;
}

void show_data(student* arr, int choice) {
  printf("\n");
  for (int i = 0; i < C_SIZE; i++) {
    if (choice == 1)
      printf("Name of student %d: %s\n", i, arr[i].name);
    else if (choice == 2)
      printf("F_number of student %d: %d\n", i, arr[i].file_number);
    else
      printf("Mark of student %d: %g\n", i, arr[i].mark); //%g == scientific notation format
  }
  printf("\n");
}

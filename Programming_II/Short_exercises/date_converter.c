#include <stdio.h>

typedef struct{
  int day;
  int month;
  int year;
}date;

int chk_day(int month, int year);
char* mnth_2_str(char** str_array, int month);

int main(void) {
  date data;
  int chk_data;
  char* mnth_str[12] = {"enero", "febrero", "marzo", "abril", "mayo", "junio", "julio",
                        "agosto", "septiembre", "octubre", "noviembre", "diciembre"};
  do {
    chk_data = 1;
    printf("Date (dd-mm-yyyy): ");
    scanf("%2d-%2d-%4d", &data.day, &data.month, &data.year);
    if (data.day < 1 || data.day > chk_day(data.month, data.year))
      chk_data = 0;
    else if (data.month < 1 || data.month > 12)
      chk_data = 0;
    else if (data.year < 1000 || data.year > 3000)
      chk_data = 0;
  } while (!chk_data);
  printf("%d de %s de %d\n", data.day, mnth_str[data.month - 1], data.year);
  return 0;
}

int chk_day(int month, int year) {
  if (month % 2 == 1 && month <= 7 || month % 2 == 0 && month >= 8)
    return 31;
  else if (month == 2) {
    if (year % 4 == 0)
      return 29;
    else
      return 28;
    }
  else
    return 30;
  }

char* mnth_2_str(char** str_array, int month) {
  return str_array[month];
}

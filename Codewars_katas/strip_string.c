#include <stdio.h>
#include <string.h>

#define N 20

char *stringLeftStrip(char *target, /*const*/ char *chars);

int main(void) {
  char str[N], condition[N];
  printf("string: ");
  fgets(str, N, stdin);
  str[strlen(str) - 1] = '\0';
  printf("Condition: ");
  fgets(condition, N, stdin);
  condition[strlen(condition) - 1] = '\0';
  printf("Result: %s\n", stringLeftStrip(str, condition));

}

char *stringLeftStrip(char *target, /*const*/ char *chars) {
/*  int first_pos, p = 0;
/*  if (chars == "") {
    return target;
  }
  else if (chars == NULL) {
    while (target[p] != '\0') {
      if (target[p] != ' ') {
        first_pos = p;
     }
      p++;
    }
  }
  //else {
  for (int i = 0; i < strlen(target); i++) {
      for (int j = 0; j < strlen(chars); j++) {
        if (target[i] != chars[j]) {
          count
        }
      }
    }
  for (int i = 0; i < (strlen(target) - first_pos); i++) {
      target[i] = target[first_pos + i];
    }
  //}
  //target[strlen(target) - first_pos] = '\0';
    return target;*/
  /*int final_position = 0, curr_position;
      for (int i = 0; i < strlen(chars); i++) {
        int cond = 1;
        for (int j = 0; j < strlen(target); j++) {
          if (target[j + curr_position] == chars[i] && cond) {
            final_position++;
        }
        else {
          cond = 0;
        }
      }
      curr_position = final_position;
    }
       printf("final_position: %d\n", final_position);
       for (int i = 0; i < (strlen(target) - final_position); i++) {
         target[i] = target[final_position + i];
       }
       target[strlen(target) - final_position] = '\0';
      return target;*/
      int final_position = 0, curr_pos, swch = 1;
if (chars == NULL) {
  for (int i = 0; i < strlen(target); i++) {
    if (target[i] == ' ' && swch) {
      final_position++;
  }
  else {
    swch = 0;
  }
 }
}
else {
  for (int i = 0; i < strlen(chars); i++) {
    swch = 1;
    for (int j = 0; j < strlen(target); j++) {
      if (target[j + curr_pos] == chars[i] && swch) {
        final_position++;
     }
      else {
        swch = 0;
      }
     }
    curr_pos = final_position;
   }
}
for (int i = 0; i < (strlen(target) - final_position); i++) {
    target[i] = target[final_position + i];
  }
target[strlen(target) - final_position] = '\0';
  return target;
}

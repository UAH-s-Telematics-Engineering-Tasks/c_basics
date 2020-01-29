/* Nombre Fichero: src/argumentos.c */

#include "argumentos.h"
//TODO Check operations a +b and a + b
int leerArgs(int argc, char **argv, double *op1, double *op2, char *operacion) {
  char signs[] = "+x/^";
  int fnd_sign = 0, fnd_minus = 0, ctr = 0;
  char* token;
  *operacion = 'E';

  if (!argv || !op1 || !op2 || !operacion || argc <= 1)
    return -1;

/*  for (int i = 0; i < argc; i++)
    printf("%s\n", argv[i]);
  for (int i = 1; i < argc && !fnd_sign; i++) {
    if (strlen(argv[i]) == 1 && strpbrk(argv[i], signs)) {
      printf("BUG\n");
      *operacion = argv[i][0];
      fnd_sign = 1;
    }
    else {
      for (unsigned int k = 0; k < strlen(signs) && !fnd_sign; k++) {
        if ((strrchr(argv[i], signs[k]) != argv[i]) && strrchr(argv[i], signs[k])) {
          *operacion = *strrchr(argv[i], signs[k]);
          printf("Operacion: %c\n", *operacion);
          *strrchr(argv[i], signs[k]) = 'D';
          fnd_sign = 1;
          }
        }
      }
    }*/
/*
    for (int i = 1; i < argc && !fnd_sign; i++) {
      token = argv[i];
      while (*token && !fnd_sign) {
        if (strchr(signs, *token) && *token != '-') {
          *operacion = *token;
          //*token = 'D';
          fnd_sign++;
        }
        else if (*token == '-' && token == argv[i]){
          if (i == 2 || i == 3) {
            *operacion = '-';
            //*token = 'D';
            fnd_minus++;
          }
        }
        else if (*token == '-' && i == 1 && token != argv[i]) {
            *operacion = '-';
            //*token = 'D';
            fnd_minus++;
          }
        token++;
      }
    }

    printf("Operacion: %c\n", *operacion);

  for (int i = 1; i < argc; i++) {
      token = strtok(argv[i], "+");
      while (token) {
        if (!ctr)
          *op1 = atof(token);
        else if (ctr == 1)
          *op2 = atof(token);
        token = strtok(NULL, "+");
        ctr++;
    }
  }*/
  int curr_size = 1;
  char* r_str = NULL;
  for (int i = 1; i < argc; i++) {
    r_str = (char*) realloc(r_str, curr_size + strlen(argv[i]));
    curr_size += strlen(argv[i]);
  }
  strcpy(r_str, argv[1]);
  for (int i = 2; i < argc; i++)
    strcat(r_str, argv[i]);

  printf("%s\n", r_str);

  if (strpbrk(r_str, signs)) {
    printf("Char: %c\n", *strpbrk(r_str, signs));
    *operacion = *strpbrk(r_str, signs);
    *strpbrk(r_str, signs) = 'D';
    printf("%s\n", r_str);
  }

  else {
    token = r_str;
    while (*token++) {
      if (*token == '-' && token != r_str) {
        *operacion = '-';
        *token = 'D';
    }
  }
}
printf("%s\n", r_str);
  printf("Sign: %c\n", *operacion);
  //for (int i = 1; i < argc; i++) {
      token = strtok(r_str, "D");
      printf("Token: %s\n", token);
      while (token) {
        if (!ctr)
          *op1 = atof(token);
        else if (ctr == 1)
          *op2 = atof(token);
        token = strtok(NULL, "D");
        printf("Token: %s\n", token);
        ctr++;
      }
    //}
  printf("OP1: %g, OP2: %g\n", *op1, *op2);
  free(r_str);
  return 0;

}

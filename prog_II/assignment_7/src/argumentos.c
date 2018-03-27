/* Nombre Fichero: src/argumentos.c */

#include "argumentos.h"

void leerArgs(int argc, char **argv, int *op)
{
  //if (!argv || argc > 2 || !op)
    //return -1;
  int n = atoi(argv[argc - 1]);
  if (n)
    *op = n;
  else
    printf("Error!!");
    //return -1;
  //return 0;
}

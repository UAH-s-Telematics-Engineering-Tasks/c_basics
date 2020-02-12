/* Nombre Fichero: src/argumentos.c */

#include "argumentos.h"
//As the function returns void, we do not have to check the input parameters, nevertheless,
//we did so and commented it out just in case.
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

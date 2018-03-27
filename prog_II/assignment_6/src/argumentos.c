/* Nombre Fichero: src/argumentos.c */

#include "argumentos.h"
int leerArgs(int argc, char **argv, double *op1, double *op2, char *operacion) {
  char signs[] = "+x/^";
  int ctr = 0, curr_size = 1, fnd_sign = 0;
  char* token, *r_str = NULL, *aux_ptr;
  *operacion = 'E'; //If it is not changed we will know we have an ERROR ('E')

  if (!argv || !op1 || !op2 || !operacion || argc <= 1)
    return -1;
/*Concatenate Strings!*/

//Create an array that's big enough!
  for (int i = 1; i < argc; i++) {
    aux_ptr = (char*) realloc(r_str, curr_size + strlen(argv[i]));
    if (aux_ptr)
      r_str = aux_ptr;
    else
      printf("ERROR allocating memory!");
    curr_size += strlen(argv[i]);
  }
//Copy the fisrt string to avoid any rubbish values issues!
  strcpy(r_str, argv[1]);
//Concatenate the strings!
  for (int i = 2; i < argc; i++)
    strcat(r_str, argv[i]);
//Look for operations other than substarctions!
  if (strpbrk(r_str, signs)) {
    *operacion = *strpbrk(r_str, signs);
    *strpbrk(r_str, signs) = 'D';
  }
  //If it is a substration...
  else {
    token = r_str;
    //Look for '-' with an aux_ptr!
    while (*token++) {
      if (*token == '-' && token != r_str && !fnd_sign) {
        *operacion = '-';
        *token = 'D';
        fnd_sign++;
    }
  }
}
//Tokenize the string with the Divisor 'D' we have written!
    token = strtok(r_str, "D");
    while (token) {
      if (!ctr)
        *op1 = atof(token);
      else if (ctr == 1)
        *op2 = atof(token);
      token = strtok(NULL, "D");
      ctr++;
    }
  //Tidy the HEAP up!
  free(r_str);
  return 0;
}

/* Nombre Fichero: src/palindromoc */
#include "palindromo.h"

int quitarEspacios(const char *textoCon, char **textoSin) {
  char* p_aux = NULL;
  int str_size = sizeof(char);
  if (!textoCon)
    return -1;
  else {
    int aux_ctr = 0;
    for (size_t i = 0; i < strlen(textoCon); i++) {
      if(textoCon[i] != ' ' && textoCon[i] != ',') {
        p_aux = (char*) realloc(*textoSin, str_size);
        str_size += sizeof(char);
        if (p_aux)
          *textoSin = p_aux;
        else
          printf("Error allocating memory!");
        *(*textoSin + aux_ctr) = tolower(textoCon[i]);
        aux_ctr++;
      }
    }
    //Add the end NULL Char, otherwise, strlen(stripped_str) would be undefined!!
    p_aux = (char*) realloc(*textoSin, str_size);
    if (p_aux)
      *textoSin = p_aux;
    else
      printf("Error allocating memory!");
    *(*textoSin + aux_ctr) = '\0';
  }
  return 1;
}

/*The string could either have an even or an odd number of chars. If its odd, the quotient strlen(str) / 2
will be truncated, as it is an int division. Then, it will check every letter except the middle one, which
has no meaning, it won't affect the word being or not a plaindrome*/
int comprobarPalindromo(const char *cadena)
{
  if (!cadena)
    return 0;
  else {
    char* stripped_str = NULL;
    quitarEspacios(cadena, &stripped_str);
    for (size_t i = 0; i < strlen(stripped_str) / 2; i++) //Dividing by 2 makes our loop faster!
      if (stripped_str[i] != stripped_str[strlen(stripped_str) - (i + 1)]) { //If it is NOT a palindrome...
        free(stripped_str);
        return 0;
      }
    free(stripped_str);
  }
  return 1;
}

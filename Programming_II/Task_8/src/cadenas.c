/* Nombre Fichero: src/cadenas.c */

#include "cadenas.h"


void modificarNombre(const char* nombre, char *nombreNuevo)
{
  if (!nombreNuevo)
    return;
  if (!nombre)
    strcpy(nombreNuevo, "SinVocales.txt");
  else {
    strcpy(nombreNuevo, nombre);
    char* token = strtok(nombreNuevo, ".");
    strcpy(nombreNuevo, token);
    strcat(nombreNuevo, "SinVocales.txt");
  }
}

void vocalAx(char* cadena, int* numCambios)
{
  if (!cadena)
    return;
  char vowels[] = "aeiouAEIOU";
  for (unsigned int i = 0; i < strlen(cadena) && cadena[i] != '\n'; i++)
    if (strchr(vowels, cadena[i])) {
      cadena[i] = 'x';
      (*numCambios)++;
    }
}

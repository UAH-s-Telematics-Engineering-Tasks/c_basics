/* Nombre Fichero: src/ficheros.c */

#include "ficheros.h"
#include "cadenas.h"

int abrirFicheroLectura(const char* nombre, FILE **pp_file)
{
  if (!nombre || !pp_file)
    return -1;
  if ((*pp_file = fopen(nombre, "r")))
    return 0;
  else
    return -1;
}

int escribirFicheroSinVocales(const char* nombre, FILE * const ficheroOriginal, int* numCambios)
{
  if (!ficheroOriginal || ! numCambios)
    return -1;

  int n_changes = 0;
  char buff[TAM_BUF];
  FILE* new_file = NULL;
  char* new_name = NULL;

  if (!nombre)
    new_name = (char*) malloc((strlen("SinVocales.txt") + 1) * sizeof(char));
  else
    new_name = (char*) malloc((strlen("SinVocales") + strlen(nombre) + 1) * sizeof(char));
  modificarNombre(nombre, new_name);
  if (!(new_file = fopen(new_name, "w+")))
    return -1;

  while (!ferror(ficheroOriginal) && !feof(ficheroOriginal)) {
    vocalAx(fgets(buff, TAM_BUF, ficheroOriginal), &n_changes);
    fputs(buff, new_file);
  }

  free(new_name);
  fclose(new_file);
  *numCambios = n_changes;
  //fclose(ficheroOriginal); //We suppose it is closed in main() for us...
  return 0;
}

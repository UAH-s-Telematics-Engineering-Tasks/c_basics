/* Nombre Fichero: include/ficheros.h */
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>

#define LONG_NOMBRE 40
#define TAM_BUF 10

/* Funcion que abre un fichero(archivo)
*[ IN] nombre, cadena de caracteres con el nombre del fichero
*[OUT] pp_file, puntero a puntero al descriptor del fichero
*[RET] Si error < 0
*/
int abrirFicheroLectura(const char* nombre, FILE **pp_file);

/* Funcion que escribe en un nuevo archivo el contenido del fichero original sin vocales.
*el nombre del nuevo archivo lo obtiene con la función "modificarNombre"
*el texto sin vocales se consigue usando la función "vocalAx".
*[ IN] nombre, cadena de caracteres con el nombre del fichero
*[ IN] p_ficheroOriginal, puntero al descriptor del fichero
*[OUT] numCambios, numero de caracteres modificados
*[RET] Si error < 0
*/
int escribirFicheroSinVocales(const char* nombre, FILE * const p_ficheroOriginal, int *numCambios);

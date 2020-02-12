/* Nombre Fichero: include/cadenas.h */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>

#define LONG_NOMBRE 40


/* Funcion que modifica el nombre del archivo que se va a escribir para 
 * aclarar que el nuevo archivo no tiene vocales.
 * el nombre del archivo se construirá a partir del nombre recibido como parámetro 
 * añadiendo "SinVocales" antes de la extensión ".txt". 
 * En caso de no recibir ningún nombre se usará “SinVocales.txt” como nombre.
 * [ IN] nombre, cadena de caracteres que contiene el nombre del fichero original
 * [OUT] nombreNuevo, cadena de caracteres en la que se escribirá el nombre modificado. 
 * Se supone que la memoria está reservada
 */
void modificarNombre(const char* nombre, char *nombreNuevo);

/*funcion que convierte las vocales de una cadena de caracteres a x
 * [OUT] cadena, cadena de caracteres de entrada
 * [OUT] numCambios, numero de caracteres modificado
 */
void vocalAx(char* cadena, int* numCambios);





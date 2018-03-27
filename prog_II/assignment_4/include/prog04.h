/* Nombre Fichero: include/prog04.h */

#ifndef PROG04_H
#define PROG04_H


// Librerias
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

// Definicion de constantes
#define MAX_NOMBRE 30
#define MAX_ARRAY  55
#define MIN_POBLACION 40000

/* RECUERDE
 * NO MODIFIQUE LOS NOMBRES DE LAS FUNCIONES NI EL NOMBRE DE LOS ARGUMENTOS
 * NO AÑADA PARAMETROS A LAS FUNCIONES */


// Definicion de tipos

typedef struct {
    char nombre[MAX_NOMBRE];
    int poblacion;
} Ciudad_t;

typedef struct {
  Ciudad_t ciudad[MAX_ARRAY];
  unsigned int num_ciudades;
} RegistroCiudades_t;

typedef enum
{
  ASCENDENTE,
  DESCENDENTE
}ORDEN_t;



// Definicion de funciones

/* funcion que permite rellenar el array de estructuras
 * [ IN] pbbdd, puntero a la estructura que contiene las ciudades
 * [ IN] nombre, nombre de la ciudad a introducir
 * [ IN] poblacion, poblacion de la ciudad a introducir
 * [RET] int, si se produce error devuelve un número negativo si no positivo */
int introducirCiudad(RegistroCiudades_t* pbbdd, const char* nombre, int poblacion);

/* funcion que muestra por pantalla una lista de todas las ciudades
 * [ IN] pbbdd, puntero a la estructura que contiene las ciudades
 * [RET] int, si se produce error devuelve un número negativo si no positivo */
int mostrarCiudades(RegistroCiudades_t* pbbdd);

/* funcion que muestra por pantalla una lista de todas las cuidades cuya poblacion sea inferior a 40000 habitantes
 * [ IN] pbbdd, puntero a la estructura que contiene las ciudades
 * [RET] return, numero de ciudades despobladas o si error número negativo */
int mostrarCiudadesDespobladas(RegistroCiudades_t* pbbdd);

/* funcion que retorna el indice de la ciudad mas poblada
 * [ IN] pbbdd, puntero a la estructura que contiene las ciudades
 * [RET] return, indice de la cuidad mas poblada o si error número negativo */
int buscarCiudadMasPoblada(RegistroCiudades_t* pbbdd);

/* funcion que retorna la poblacion media de las ciudades
 * [ IN] pbbdd, puntero a la estructura que contiene las ciudades
 * [RET] return, poblacion media de las ciudades o si error número negativo */
float calcularPoblacionMedia(RegistroCiudades_t* pbbdd);

/* funcion que ordena las ciudades por poblacion de mayor a menor
 * [ IN] pbbdd, puntero a la estructura que contiene las ciudades
 * [ IN] orden, si es ASCENDENTE, ordenado de mayor a menor, si es DESCENDENTE ordenado de menor a mayor
 * [RET] return, si error número negativo */
int ordenarCiudadesPorPoblacion(RegistroCiudades_t* pbbdd,  ORDEN_t orden);

#endif
